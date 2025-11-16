#include "stdio.h"
#include "string.h"
#include "images.h"
#include "hal_data.h"
//#include "stdbool.h"


#define N 10    /*Frame dimension for QCIF format*/
#define M 10     /*Frame dimension for QCIF format*/


#define B 10      /*Block size*/

#define p 7       /*Search space. Restricted in a [-p,p] region around the
                    original location of the block.*/


void phods_motion_estimation(const int current[N][M], const int previous[N][M],
        int vectors_x[N/B][M/B],int vectors_y[N/B][M/B])
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

//    memset(vectors_x, 0, sizeof vectors_x); // better than init with for loops
//    memset(vectors_y, 0, sizeof vectors_y);


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
                            p1 = current[B*x+k][B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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
                                q2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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
                            p1 = current[B*x+k][B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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
                                q2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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
                            p1 = current[B*x+k][B*y+l];

                            if((B*x + vectors_x[x][y] + i + k) < 0 ||
                                    (B*x + vectors_x[x][y] + i + k) > (N-1) ||
                                    (B*y + vectors_y[x][y] + l) < 0 ||
                                    (B*y + vectors_y[x][y] + l) > (M-1))
                            {
                                p2 = 0;
                            } else {
                                p2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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
                                q2 = previous[B*x+vectors_x[x][y]+i+k][B*y+vectors_y[x][y]+l];
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


/*******************************************************************************************************************//**
 * @brief  Blinky example application
 *
 * Blinks all leds at a rate of 1 second using the software delay function provided by the BSP.
 * Only references two other modules including the BSP, IOPORT.
 *
 **********************************************************************************************************************/
void hal_entry(void) {

    CoreDebug->DEMCR |= 0x01000000;
       ITM->LAR = 0xC5ACCE55;
       DWT->CYCCNT = 0;
       DWT->CTRL |= 1;
       double times[10];
       int motion_vectors_x[N/B][M/B],
           motion_vectors_y[N/B][M/B], i, j;

      for(int i = 0; i<10; i++){
         DWT->CYCCNT = 0;
         phods_motion_estimation(current,previous,motion_vectors_x,motion_vectors_y);
         times[i] = DWT->CYCCNT;
         }

      while(1);
}

