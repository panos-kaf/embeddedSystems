#!/bin/bash

qList="SLL DLL DYN_ARR"

out_dir="results"

mkdir -p $out_dir

for list in $qList
do
    make $list
    log="${out_dir}/mem_accesses_log_${list}.txt"
    valgrind --log-file="${log}" --tool=lackey --trace-mem=yes ./dijkstra input.dat
    grep -c 'I\| L' ${log} > ${out_dir}/numMemAccesses_${list}.txt
    massif_out="${out_dir}/massif.out.${list}"
    valgrind --tool=massif --massif-out-file=${massif_out} ./dijkstra input.dat
    ms_print ${massif_out} > mem_footprint_log_${list}.txt
done
