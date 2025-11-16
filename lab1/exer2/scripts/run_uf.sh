#!/bin/bash

for uf in 2 4 8 16 32
do
	/gem5/build/X86/gem5.opt --stats-file=stats_uf${uf}.txt /gem5/configs/learning_gem5/part1/two_level.py /gem5/tables_UF/tables_uf${uf}.exe --l1i_size=8kB --l1d_size=8kB --l2_size=128kB
done

for l1d_size in 2 4 8 16 32 64
do
	/gem5/build/X86/gem5.opt --stats-file=stats_${l1d_size}_l1d.txt /gem5/configs/learning_gem5/part1/two_level.py /gem5/tables_UF/tables.exe --l1i_size=8kB --l1d_size=${l1d_size}kB --l2_size=128kB
done


