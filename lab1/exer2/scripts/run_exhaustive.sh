#!/bin/bash

output_file="/gem5/total_stats.out"
> "$output_file"     # clear previous file

stats_file="/gem5/m5out/stats.txt"

for uf in 2 4 8 16 32
do
	for l1i_size in 2 4 8 16 32 64
	do
		for l1d_size in 2 4 8 16 32 64
		do
			for l2_size in 128 256 512 1024
			do
			    # Run gem5
			    /gem5/build/X86/gem5.opt /gem5/configs/learning_gem5/part1/two_level.py /gem5/tables_UF/tables_uf${uf}.exe --l1i_size=${l1i_size}kB --l1d_size=${l1d_size}kB --l2_size=${l2_size}kB

			    # Extract only the relevant stat and append to the central file
			    numCycles=$(grep "^system.cpu.numCycles" "$stats_file" | awk '{print $2}')

			    echo "UF_${uf}-l1i_${l1i_size}kB-l1d_${l1d_size}kB-l2_${l2_size}kB:		${numCycles}" >> "$output_file"
			    echo "Saved result for UF${uf}-l1i_${l1i_size}kB-l1d_${l1d_size}kB-l2_${l2_size}kB configuration"
			done
		done
	done
done
