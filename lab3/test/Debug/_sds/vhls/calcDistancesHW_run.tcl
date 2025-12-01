open_project calcDistancesHW
set_top calcDistancesHW
add_files /home/sdsocuser/workspace/test/src/calcDist.cpp -cflags "-I/home/sdsocuser/workspace/test/src -Wall -O0 -g -fmessage-length=0 -D __SDSCC__ -m32 -I /opt/Xilinx/SDx/2016.4/aarch32-linux/include -I/home/sdsocuser/workspace/test/src -D __SDSVHLS__ -I /home/sdsocuser/workspace/test/Debug -w"
open_solution "solution" -reset
set_part { xc7z010clg400-2 }
# synthesis directives
create_clock -period 10.000000
config_rtl -reset_level low
source /home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW.tcl
# end synthesis directives
csynth_design
export_design -acc
exit
