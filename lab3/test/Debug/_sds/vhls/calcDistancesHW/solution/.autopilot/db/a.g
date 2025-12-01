#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.g.bc ${1+"$@"}
