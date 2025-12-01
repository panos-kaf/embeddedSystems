#include "sds_perf_instrumentation.h"

sw_function_perf_info_t _sds_sw_calcDistancesHW = {
  .function_name = "calcDistancesHW",
  .cycleCount = 0,
  .entryCount = 0,
  .isRoot = 0
};

sw_function_perf_info_t _sds_sw_main = {
  .function_name = "main",
  .cycleCount = 0,
  .entryCount = 0,
  .isRoot = 1
};


void add_sw_estimates()
{
  add_sw_perf_function(&_sds_sw_calcDistancesHW);

  add_sw_perf_function(&_sds_sw_main);

}
