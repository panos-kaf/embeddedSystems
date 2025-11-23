#!/bin/bash

clientList="SLL_CL DLL_CL DYN_ARR_CL"

packetList="SLL_PK DLL_PK DYN_ARR_PK"

out_dir="results"

logs_dir="${out_dir}/mem_logs"
accesses_dir="${out_dir}/numAccesses"
footprints_dir="${out_dir}/mem_footprint"
massif_dir="${out_dir}/massif_out"

mkdir -p "$logs_dir" "$accesses_dir" "$footprints_dir" "$massif_dir"

for cl in $clientList
do
    for pl in $packetList
    do
        name="${cl}_${pl}.txt"
        gcc drr.c -o drr -D${cl} -D${pl} -pthread -lcdsl -no-pie -L ./../synch_implementations -I ./../synch_implementations
        log="${logs_dir}/${name}"
        valgrind --log-file="${log}" --tool=lackey --trace-mem=yes ./drr
        grep -c 'I\| L' ${log} > ${accesses_dir}/${name}
        massif_out="${massif_dir}/${name}"
        valgrind --tool=massif --massif-out-file=${massif_out} ./drr
        ms_print ${massif_out} > ${footprints_dir}/${name}
    done
done
