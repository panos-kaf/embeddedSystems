#include "stdio.h"
#include "string.h"
#include "images.h"

#define N 128    /*Frame dimension for QCIF format*/
#define M 150     /*Frame dimension for QCIF format*/

//#define B 5      /*Block size*/

#define p 7       /*Search space. Restricted in a [-p,p] region around the
                    original location of the block.*/


void phods_motion_estimation(const int current[], const int previous[],
        int vectors_x[N/B][M/B],int vectors_y[N/B][M/B], int B)
{
    int x, y, i, j, k, l, p1, p2, q2, distx, disty, S, min1, min2, bestx, besty;

    distx = 0;
    disty = 0;

    /*Initialize the vector motion matrices*/
    for(i=N/B-1; i>=0; i--)
    {
        for(j=M/B-1;j>=0;j--)
        {
            vectors_x[i][j] = 0;
            vectors_y[i][j] = 0;
        }
    }

    /*For all blocks in the current frame*/
    for(x=N/B-1; x>=0; x--)
    {
        for(y=M/B-1; y>=0; y--)
        {
            S = 4;

            while(S > 0)
            {
                min1 = 255*B*B;
                min2 = 255*B*B;

                    i = -S;
                    distx = 0;
                    disty = 0;

                    /*For all pixels in the block*/
                    for(k=B-1; k--;)
                    {
                        for(l=B-1; l--;)
                        {
                            p1 = current[(B*x+k)*M + B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[(B*x+vectors_x[x][y]+i+k)*M + B*y+vectors_y[x][y]+l];
                            }

                            if(p1-p2>0){
                                distx += p1-p2;
                            }
                            else{
                                distx += p2-p1;
                            }

                            if((B*x + vectors_x[x][y] + k) <0 ||
                                    (B*x + vectors_x[x][y] + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + i + l) < 0 ||
                                    (B*y + vectors_y[x][y] + i + l) > (M-1))
                            {
                                q2 = 0;
                            } else {
                                q2 = previous[(B*x+vectors_x[x][y]+k)*M + B*y+vectors_y[x][y]+i+l];
                            }

                            if(p1-q2>0){
                                disty += p1-q2;
                            }
                            else{
                                disty += q2-p1;
                            }

                        }
                    }

                    if(distx < min1)
                    {
                        min1 = distx;
                        bestx = i;
                    }

                    if(disty < min2)
                    {
                        min2 = disty;
                        besty = i;
                    }
                    i = 0;
                    distx = 0;
                    disty = 0;

                    /*For all pixels in the block*/
                    for(k=B-1; k--;)
                    {
                        for(l=B-1; l--;)
                        {
                            p1 = current[(B*x+k)*M + B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[(B*x+vectors_x[x][y]+i+k)*M + B*y+vectors_y[x][y]+l];
                            }

                            if(p1-p2>0){
                                distx += p1-p2;
                            }
                            else{
                                distx += p2-p1;
                            }

                            if((B*x + vectors_x[x][y] + k) <0 ||
                                    (B*x + vectors_x[x][y] + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + i + l) < 0 ||
                                    (B*y + vectors_y[x][y] + i + l) > (M-1))
                            {
                                q2 = 0;
                            } else {
                                q2 = previous[(B*x+vectors_x[x][y]+k)*M + B*y+vectors_y[x][y]+i+l];
                            }

                            if(p1-q2>0){
                                disty += p1-q2;
                            }
                            else{
                                disty += q2-p1;
                            }

                        }
                    }

                    if(distx < min1)
                    {
                        min1 = distx;
                        bestx = i;
                    }

                    if(disty < min2)
                    {
                        min2 = disty;
                        besty = i;
                    }
                    i = S;
                    distx = 0;
                    disty = 0;

                    /*For all pixels in the block*/
                    for(k=B-1;k--;)
                    {
                        for(l=B-1; l--;)
                        {
                            p1 = current[(B*x+k)*M + B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[(B*x+vectors_x[x][y]+i+k)*M + B*y+vectors_y[x][y]+l];
                            }

                            if(p1-p2>0){
                                distx += p1-p2;
                            }
                            else{
                                distx += p2-p1;
                            }

                            if((B*x + vectors_x[x][y] + k) <0 ||
                                    (B*x + vectors_x[x][y] + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + i + l) < 0 ||
                                    (B*y + vectors_y[x][y] + i + l) > (M-1))
                            {
                                q2 = 0;
                            } else {
                                q2 = previous[(B*x+vectors_x[x][y]+k)*M + B*y+vectors_y[x][y]+i+l];
                            }

                            if(p1-q2>0){
                                disty += p1-q2;
                            }
                            else{
                                disty += q2-p1;
                            }

                        }
                    }

                    if(distx < min1)
                    {
                        min1 = distx;
                        bestx = i;
                    }

                    if(disty < min2)
                    {
                        min2 = disty;
                        besty = i;
                    }

                S = S/2;
                vectors_x[x][y] += bestx;
                vectors_y[x][y] += besty;
            }
        }
    }

}

#include <stdio.h>
#include <stdbool.h>

#define MAX 1000  // big enough for your numbers

#define MAX (N>M)?N:M

bool present[MAX] = {false};
int times[MAX];
void common_divisors(int N, int M){

    for (int i = 1; i <= MAX; i++) {
        if (N % i == 0 && M % i == 0) {
            present[i] = true;
        }
    }
}

/*******************************************************************************************************************//**
 * @brief  Blinky example application
 *
 * Blinks all leds at a rate of 1 second using the software delay function provided by the BSP.
 * Only references two other modules including the BSP, IOPORT.
 *
 **********************************************************************************************************************/
int main(){
    double times[10];
    int motion_vectors_x[N/B][M/B],
    motion_vectors_y[N/B][M/B], i, j;

    for(int i = 0; i<10; i++)
        phods_motion_estimation(current,previous,motion_vectors_x,motion_vectors_y, 5);

    for(i = 0; i < N/B; i++)
        for(int j = 0; j < M/B; j++)
            printf("%d, ", motion_vectors_x[i][j]);
    printf("\n");

    printf("\n");

    for(i = 0; i < N/B; i++)
        for(int j = 0; j < M/B; j++)
            printf("%d, ", motion_vectors_y[i][j]);
    printf("\n");

    for(i = 0; i < MAX ; i++){
        if(present[i]){
            DWT->CYCCNT=0;
            phods_motion_estimation(current,previous,motion_vectors_x,motion_vectors_y, i);
            times[i] = DWT->CYCCNT;
        }
    }

}
