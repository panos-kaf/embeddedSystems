#include <math.h>

#include "calcDist.h"


#ifndef D_sds_lib
#define D_sds_lib
#ifdef __cplusplus
extern "C" {
#endif
extern unsigned long long sds_clock_counter(void);
#ifdef __cplusplus
}
#endif
#endif
#include "sds_perf_instrumentation.h"

extern sw_function_perf_info_t _sds_sw_calcDistancesHW;

void calcDistancesHW(float* data_hw, float* dists_hw)
{
  unsigned long long __sds_est_clk_start, __sds_est_clk_end;
  __sds_est_clk_start = sds_clock_counter();

	float data_hw_tmp[MOVIES_NUM][USERS_NUM];
	float movie_tmp[USERS_NUM];
	float dists_hw_tmp[MOVIES_NUM];

LOAD_DATA_HW_TMP:
	for (int i = 0; i < MOVIES_NUM; i++) {
		for (int j = 0; j < USERS_NUM; j++) {
			data_hw_tmp[i][j] = data_hw[i * USERS_NUM + j];
		}
	}

LOAD_MOVIE_TMP:
	for (int i = 0; i < USERS_NUM; i++){
		movie_tmp[i] = data_hw_tmp[MOVIE_ID][i];
	}

COMPUTE_DISTS:
	for (int i = 0; i < MOVIES_NUM; i++) {
		float sum = 0.0, diff = 0.0;
		for (int j = 0; j < USERS_NUM; j++){
			diff = data_hw_tmp[i][j] - movie_tmp[j];
			sum += diff * diff;
		}
		dists_hw_tmp[i] = sqrt(sum);
	}

WRITE_DISTS:
	for (int i = 0; i < MOVIES_NUM; i++) {
		dists_hw[i] = dists_hw_tmp[i];
	}

  __sds_est_clk_end = sds_clock_counter();
  _sds_sw_calcDistancesHW.entryCount++;
  _sds_sw_calcDistancesHW.cycleCount += (__sds_est_clk_end - __sds_est_clk_start);
}
