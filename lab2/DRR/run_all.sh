#!/bin/bash

clientList="SLL_CL DLL_CL DYN_ARR_CL"

packetList="SLL_PK DLL_PK DYN_ARR_PK"

out_dir="results"

mkdir -p ${outdir}/mem_logs
mkdir -p ${outdir}/numAccesses
mkdir -p ${outdir}/mem_footprint
mkdir -p ${outdir}/massif_out

for cl in $clientList
do
    for pl in $packetList
    do
        gcc drr.c -o drr -D${cl} -D${pl} -pthread -lcdsl -no-pie -L ./../synch_implementations -I ./../synch_implementations
        log="${out_dir}/mem_logs/mem_accesses_log_${cl}_${pl}.txt"
        valgrind --log-file="${log}" --tool=lackey --trace-mem=yes ./drr
        grep -c 'I\| L' ${log} > ${out_dir}/numAccesses/numMemAccesses_${cl}_${pl}.txt
        massif_out="${out_dir}/massif_out/massif.out.${cl}_${pl}"
        valgrind --tool=massif --massif-out-file=${massif_out} ./drr
        ms_print ${massif_out} > ${out_dir}/mem_footprint/mem_footprint_log_${cl}_${pl}.txt
    done
done
