#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("data_hw_dout", 32, hls_in, 0, "ap_fifo", "fifo_data", 32),
	Port_Property("data_hw_empty_n", 1, hls_in, 0, "ap_fifo", "fifo_status", 32),
	Port_Property("data_hw_read", 1, hls_out, 0, "ap_fifo", "fifo_update", 32),
	Port_Property("dists_hw_din", 32, hls_out, 1, "ap_fifo", "fifo_data", 1024),
	Port_Property("dists_hw_full_n", 1, hls_in, 1, "ap_fifo", "fifo_status", 1024),
	Port_Property("dists_hw_write", 1, hls_out, 1, "ap_fifo", "fifo_update", 1024),
};
const char* HLS_Design_Meta::dut_name = "calcDistancesHW";
