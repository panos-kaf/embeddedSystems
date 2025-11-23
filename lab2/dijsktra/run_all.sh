#!/bin/bash

qList="SLL DLL DYN_ARR"

out_dir="results"

massif_dir="$out_dir/massif_out"
footprints_dir="$out_dir/mem_footprint"
accesses_dir="$out_dir/mem_accesses"
logs_dir="$out_dir/mem_logs"

mkdir -p "$logs_dir" "$accesses_dir" "$footprints_dir" "$massif_dir"

for list in $qList
do
    make $list
    name="${list}.txt"
    log="${logs_dir}/${name}"
    valgrind --log-file="${log}" --tool=lackey --trace-mem=yes ./dijkstra input.dat
    grep -c 'I\| L' ${log} > ${accesses_dir}/${name}
    massif_out="${massif_dir}/${name}"
    valgrind --tool=massif --massif-out-file=${massif_out} ./dijkstra input.dat
    ms_print ${massif_out} > ${footprints_dir}/${name}
done
