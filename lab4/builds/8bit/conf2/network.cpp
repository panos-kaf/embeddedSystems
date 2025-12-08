#include "network.h"
#include "weight_definitions.h"
#include "tanh.h"

l_quantized_type ReLU(l_quantized_type res)
{
	if (res < 0)
		return 0;

	return res;
}

l_quantized_type tanh(l_quantized_type res)
{
	if (res >= 2)
		return 1;
	else if (res < -2)
		return -1;
	else
	{
		ap_int <BITS+2> i = res.range();			//prepare result to match tanh value
		return tanh_vals[(BITS_EXP/2) + i.to_int()];
	}
}

void forward_propagation(float *x, float *y)
{
	quantized_type xbuf[N1];
	l_quantized_type layer_1_out[M1];
	l_quantized_type layer_2_out[M2];


	//limit resources to max DSP number of Zybo - do not change
	#pragma HLS ALLOCATION instances=mul limit=80 operation

/*
	#define N1 392
	#define M1 30

	#define N2 30
	#define M2 50

	#define N3 50
	#define M3 392

	#define BITS 8		// set bitwidth of multipliers
	#define BITS_EXP 1024 //must be set to 2^(BITS+2). Should match tanh_vals size
*/

#pragma HLS array_partition variable=xbuf cyclic factor=4 dim=1		// same factor as unroll maybe?
#pragma HLS array_partition variable=layer_1_out cyclic factor=4 dim=1
#pragma HLS array_partition variable=layer_2_out cyclic factor=4 dim=1
#pragma HLS array_partition variable=W1 cyclic factor=4 dim=2

	read_input:
	for (int i=0; i<N1; i++)
	{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
		xbuf[i] = x[i];
	}

	// Layer 1
	layer_1:
	for(int i=0; i<N1; i++)
	{
#pragma HLS pipeline II=1
#pragma HLS unroll factor=8
		for(int j=0; j<M1; j++)
		{
#pragma HLS pipeline II=1
#pragma HLS unroll factor=8
			l_quantized_type last = (i==0) ? (l_quantized_type) 0 : layer_1_out[j];
			quantized_type term = xbuf[i] * W1[i][j];
			layer_1_out[j] = last + term;
		}
	}
	layer_1_act:
	for(int i=0; i<M1; i++)
	{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
		layer_1_out[i] = ReLU(layer_1_out[i]);
	}

	// Layer 2
	layer_2:
	for(int i=0; i<M2; i++)
	{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
		l_quantized_type result = 0;
		for(int j=0; j<N2; j++)
		{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
			l_quantized_type term = layer_1_out[j] * W2[j][i];
			result += term;
		}
		layer_2_out[i] = ReLU(result);
	}

	// Layer 3
	layer_3:
	for(int i=0; i<M3; i++)
	{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
		l_quantized_type result = 0;
		for(int j=0; j<N3; j++)
		{
#pragma HLS pipeline II=1
//#pragma HLS unroll factor=2
			l_quantized_type term = layer_2_out[j] * W3[j][i];
			result += term;
		}
		y[i] = tanh(result).to_float();
	}
}
