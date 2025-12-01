set C_TypeInfoList {{ 
"calcDistancesHW" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"data_hw": [[],{ "pointer":  {"scalar": "float"}}] }, {"dists_hw": [[],{ "pointer":  {"scalar": "float"}}] }],[],""]
}}
set moduleName calcDistancesHW
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {calcDistancesHW}
set C_modelType { void 0 }
set C_modelArgList {
	{ data_hw float 32 regular {fifo 0}  }
	{ dists_hw float 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "data_hw", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "data_hw","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dists_hw", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dists_hw","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ data_hw_dout sc_in sc_lv 32 signal 0 } 
	{ data_hw_empty_n sc_in sc_logic 1 signal 0 } 
	{ data_hw_read sc_out sc_logic 1 signal 0 } 
	{ dists_hw_din sc_out sc_lv 32 signal 1 } 
	{ dists_hw_full_n sc_in sc_logic 1 signal 1 } 
	{ dists_hw_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "data_hw_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data_hw", "role": "dout" }} , 
 	{ "name": "data_hw_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_hw", "role": "empty_n" }} , 
 	{ "name": "data_hw_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data_hw", "role": "read" }} , 
 	{ "name": "dists_hw_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dists_hw", "role": "din" }} , 
 	{ "name": "dists_hw_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dists_hw", "role": "full_n" }} , 
 	{ "name": "dists_hw_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dists_hw", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "calcDistancesHW",
		"VariableLatency" : "1",
		"AlignedPipeline" : "0",
		"UnalignedPipeline" : "0",
		"ProcessNetwork" : "0",
		"Combinational" : "0",
		"ControlExist" : "1",
		"Port" : [
		{"Name" : "data_hw", "Type" : "Fifo", "Direction" : "I",
			"BlockSignal" : [
			{"Name" : "data_hw_blk_n", "Type" : "RtlSignal"}]},
		{"Name" : "dists_hw", "Type" : "Fifo", "Direction" : "O",
			"BlockSignal" : [
			{"Name" : "dists_hw_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.data_hw_tmp_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.movie_tmp_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dists_hw_tmp_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calcDistancesHW_feOg_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calcDistancesHW_ffYi_U2", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.calcDistancesHW_fg8j_U3", "Parent" : "0"}]}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "475204", "Max" : "475204"}
	, {"Name" : "Interval", "Min" : "475205", "Max" : "475205"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	data_hw { ap_fifo {  { data_hw_dout fifo_data 0 32 }  { data_hw_empty_n fifo_status 0 1 }  { data_hw_read fifo_update 1 1 } } }
	dists_hw { ap_fifo {  { dists_hw_din fifo_data 1 32 }  { dists_hw_full_n fifo_status 0 1 }  { dists_hw_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	data_hw { fifo_read 32 no_conditional }
	dists_hw { fifo_write 1024 no_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
