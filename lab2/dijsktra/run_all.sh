#!/bin/bash

qList="SLL DLL DYN_ARR"

out_dir="results"

massif_dir="$out_dir/massif_out"
footprints_dir="$out_dir/mem_footprint"
accesses_dir="$out_dir/mem_accesses"
logs_dir="$out_dir/mem_logs"

mkdir -p $massif_dir
mkdir -p $footprints_dir
mkdir -p $accesses_dir
mkdir -p $logs_dir

for list in $qList
do
    make $list
    log="${logs_dir}/${list}.txt"
    valgrind --log-file="${log}" --tool=lackey --trace-mem=yes ./dijkstra input.dat
    grep -c 'I\| L' ${log} > ${acceses_dir}/${list}.txt
    massif_out="${massif_dir}/${list}"
    valgrind --tool=massif --massif-out-file=${massif_out} ./dijkstra input.dat
    ms_print ${massif_out} > ${footprints_dir}/${list}.txt
done
