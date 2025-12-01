; ModuleID = '/home/sdsocuser/workspace/test/src/calcDist.cpp'
target datalayout = "e-m:e-p:32:32-i64:64-v128:64:128-n32-S64"
target triple = "armv7--linux-gnueabihf"

; Function Attrs: nounwind
define void @_Z15calcDistancesHWPfS_(float* %data_hw, float* %dists_hw) #0 {
  %1 = alloca float*, align 4
  %2 = alloca float*, align 4
  %data_hw_tmp = alloca [1024 x [32 x float]], align 4
  %movie_tmp = alloca [32 x float], align 4
  %dists_hw_tmp = alloca [1024 x float], align 4
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %i1 = alloca i32, align 4
  %i2 = alloca i32, align 4
  %sum = alloca float, align 4
  %diff = alloca float, align 4
  %j3 = alloca i32, align 4
  %i4 = alloca i32, align 4
  store float* %data_hw, float** %1, align 4
  call void @llvm.dbg.declare(metadata !{float** %1}, metadata !25), !dbg !26
  store float* %dists_hw, float** %2, align 4
  call void @llvm.dbg.declare(metadata !{float** %2}, metadata !27), !dbg !28
  call void @llvm.dbg.declare(metadata !{[1024 x [32 x float]]* %data_hw_tmp}, metadata !29), !dbg !34
  call void @llvm.dbg.declare(metadata !{[32 x float]* %movie_tmp}, metadata !35), !dbg !38
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %dists_hw_tmp}, metadata !39), !dbg !42
  br label %3, !dbg !43

; <label>:3                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !44), !dbg !47
  store i32 0, i32* %i, align 4, !dbg !48
  br label %4, !dbg !48

; <label>:4                                       ; preds = %27, %3
  %5 = load i32* %i, align 4, !dbg !49
  %6 = icmp slt i32 %5, 1024, !dbg !49
  br i1 %6, label %7, label %30, !dbg !49

; <label>:7                                       ; preds = %4
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !52), !dbg !55
  store i32 0, i32* %j, align 4, !dbg !56
  br label %8, !dbg !56

; <label>:8                                       ; preds = %23, %7
  %9 = load i32* %j, align 4, !dbg !57
  %10 = icmp slt i32 %9, 32, !dbg !57
  br i1 %10, label %11, label %26, !dbg !57

; <label>:11                                      ; preds = %8
  %12 = load i32* %i, align 4, !dbg !60
  %13 = mul nsw i32 %12, 32, !dbg !60
  %14 = load i32* %j, align 4, !dbg !60
  %15 = add nsw i32 %13, %14, !dbg !60
  %16 = load float** %1, align 4, !dbg !60
  %17 = getelementptr inbounds float* %16, i32 %15, !dbg !60
  %18 = load float* %17, align 4, !dbg !60
  %19 = load i32* %j, align 4, !dbg !60
  %20 = load i32* %i, align 4, !dbg !60
  %21 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %20, !dbg !60
  %22 = getelementptr inbounds [32 x float]* %21, i32 0, i32 %19, !dbg !60
  store float %18, float* %22, align 4, !dbg !60
  br label %23, !dbg !62

; <label>:23                                      ; preds = %11
  %24 = load i32* %j, align 4, !dbg !63
  %25 = add nsw i32 %24, 1, !dbg !63
  store i32 %25, i32* %j, align 4, !dbg !63
  br label %8, !dbg !63

; <label>:26                                      ; preds = %8
  br label %27, !dbg !64

; <label>:27                                      ; preds = %26
  %28 = load i32* %i, align 4, !dbg !65
  %29 = add nsw i32 %28, 1, !dbg !65
  store i32 %29, i32* %i, align 4, !dbg !65
  br label %4, !dbg !65

; <label>:30                                      ; preds = %4
  br label %31, !dbg !66

; <label>:31                                      ; preds = %30
  call void @llvm.dbg.declare(metadata !{i32* %i1}, metadata !67), !dbg !69
  store i32 0, i32* %i1, align 4, !dbg !70
  br label %32, !dbg !70

; <label>:32                                      ; preds = %42, %31
  %33 = load i32* %i1, align 4, !dbg !71
  %34 = icmp slt i32 %33, 32, !dbg !71
  br i1 %34, label %35, label %45, !dbg !71

; <label>:35                                      ; preds = %32
  %36 = load i32* %i1, align 4, !dbg !74
  %37 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 0, !dbg !74
  %38 = getelementptr inbounds [32 x float]* %37, i32 0, i32 %36, !dbg !74
  %39 = load float* %38, align 4, !dbg !74
  %40 = load i32* %i1, align 4, !dbg !74
  %41 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %40, !dbg !74
  store float %39, float* %41, align 4, !dbg !74
  br label %42, !dbg !76

; <label>:42                                      ; preds = %35
  %43 = load i32* %i1, align 4, !dbg !77
  %44 = add nsw i32 %43, 1, !dbg !77
  store i32 %44, i32* %i1, align 4, !dbg !77
  br label %32, !dbg !77

; <label>:45                                      ; preds = %32
  br label %46, !dbg !78

; <label>:46                                      ; preds = %45
  call void @llvm.dbg.declare(metadata !{i32* %i2}, metadata !79), !dbg !81
  store i32 0, i32* %i2, align 4, !dbg !82
  br label %47, !dbg !82

; <label>:47                                      ; preds = %79, %46
  %48 = load i32* %i2, align 4, !dbg !83
  %49 = icmp slt i32 %48, 1024, !dbg !83
  br i1 %49, label %50, label %82, !dbg !83

; <label>:50                                      ; preds = %47
  call void @llvm.dbg.declare(metadata !{float* %sum}, metadata !86), !dbg !88
  store float 0.000000e+00, float* %sum, align 4, !dbg !89
  call void @llvm.dbg.declare(metadata !{float* %diff}, metadata !90), !dbg !91
  store float 0.000000e+00, float* %diff, align 4, !dbg !89
  call void @llvm.dbg.declare(metadata !{i32* %j3}, metadata !92), !dbg !94
  store i32 0, i32* %j3, align 4, !dbg !95
  br label %51, !dbg !95

; <label>:51                                      ; preds = %69, %50
  %52 = load i32* %j3, align 4, !dbg !96
  %53 = icmp slt i32 %52, 32, !dbg !96
  br i1 %53, label %54, label %72, !dbg !96

; <label>:54                                      ; preds = %51
  %55 = load i32* %j3, align 4, !dbg !99
  %56 = load i32* %i2, align 4, !dbg !99
  %57 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %56, !dbg !99
  %58 = getelementptr inbounds [32 x float]* %57, i32 0, i32 %55, !dbg !99
  %59 = load float* %58, align 4, !dbg !99
  %60 = load i32* %j3, align 4, !dbg !99
  %61 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %60, !dbg !99
  %62 = load float* %61, align 4, !dbg !99
  %63 = fsub float %59, %62, !dbg !99
  store float %63, float* %diff, align 4, !dbg !99
  %64 = load float* %diff, align 4, !dbg !101
  %65 = load float* %diff, align 4, !dbg !101
  %66 = fmul float %64, %65, !dbg !101
  %67 = load float* %sum, align 4, !dbg !101
  %68 = fadd float %67, %66, !dbg !101
  store float %68, float* %sum, align 4, !dbg !101
  br label %69, !dbg !102

; <label>:69                                      ; preds = %54
  %70 = load i32* %j3, align 4, !dbg !103
  %71 = add nsw i32 %70, 1, !dbg !103
  store i32 %71, i32* %j3, align 4, !dbg !103
  br label %51, !dbg !103

; <label>:72                                      ; preds = %51
  %73 = load float* %sum, align 4, !dbg !104
  %74 = fpext float %73 to double, !dbg !104
  %75 = call double @sqrt(double %74) #2, !dbg !104
  %76 = fptrunc double %75 to float, !dbg !104
  %77 = load i32* %i2, align 4, !dbg !104
  %78 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %77, !dbg !104
  store float %76, float* %78, align 4, !dbg !104
  br label %79, !dbg !105

; <label>:79                                      ; preds = %72
  %80 = load i32* %i2, align 4, !dbg !106
  %81 = add nsw i32 %80, 1, !dbg !106
  store i32 %81, i32* %i2, align 4, !dbg !106
  br label %47, !dbg !106

; <label>:82                                      ; preds = %47
  br label %83, !dbg !107

; <label>:83                                      ; preds = %82
  call void @llvm.dbg.declare(metadata !{i32* %i4}, metadata !108), !dbg !110
  store i32 0, i32* %i4, align 4, !dbg !111
  br label %84, !dbg !111

; <label>:84                                      ; preds = %94, %83
  %85 = load i32* %i4, align 4, !dbg !112
  %86 = icmp slt i32 %85, 1024, !dbg !112
  br i1 %86, label %87, label %97, !dbg !112

; <label>:87                                      ; preds = %84
  %88 = load i32* %i4, align 4, !dbg !115
  %89 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %88, !dbg !115
  %90 = load float* %89, align 4, !dbg !115
  %91 = load i32* %i4, align 4, !dbg !115
  %92 = load float** %2, align 4, !dbg !115
  %93 = getelementptr inbounds float* %92, i32 %91, !dbg !115
  store float %90, float* %93, align 4, !dbg !115
  br label %94, !dbg !117

; <label>:94                                      ; preds = %87
  %95 = load i32* %i4, align 4, !dbg !118
  %96 = add nsw i32 %95, 1, !dbg !118
  store i32 %96, i32* %i4, align 4, !dbg !118
  br label %84, !dbg !118

; <label>:97                                      ; preds = %84
  ret void, !dbg !119
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata) #1

; Function Attrs: nounwind
declare double @sqrt(double) #0

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { nounwind }

!llvm.dbg.cu = !{!0}
!xidane.fname = !{!11, !12, !13, !14}
!xidane.function_argument_annotation = !{!11, !15}
!xidane.function_declaration_type = !{!11, !16, !13, !17}
!xidane.function_declaration_filename = !{!11, !18, !13, !19}
!xidane.ExternC = !{!13}
!llvm.module.flags = !{!20, !21, !22, !23}
!llvm.ident = !{!24}

!0 = metadata !{i32 786449, metadata !1, i32 4, metadata !"clang version 3.5.0 (tags/RELEASE_350/final)", i1 false, metadata !"", i32 0, metadata !2, metadata !2, metadata !3, metadata !2, metadata !2, metadata !"", i32 1} ; [ DW_TAG_compile_unit ] [/home/sdsocuser/workspace/test/Debug/../src/calcDist.cpp] [DW_LANG_C_plus_plus]
!1 = metadata !{metadata !"../src/calcDist.cpp", metadata !"/home/sdsocuser/workspace/test/Debug"}
!2 = metadata !{}
!3 = metadata !{metadata !4}
!4 = metadata !{i32 786478, metadata !5, metadata !6, metadata !"calcDistancesHW", metadata !"calcDistancesHW", metadata !"_Z15calcDistancesHWPfS_", i32 5, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @_Z15calcDistancesHWPfS_, null, null, metadata !2, i32 6} ; [ DW_TAG_subprogram ] [line 5] [def] [scope 6] [calcDistancesHW]
!5 = metadata !{metadata !"/home/sdsocuser/workspace/test/src/calcDist.cpp", metadata !"/home/sdsocuser/workspace/test/Debug"}
!6 = metadata !{i32 786473, metadata !5}          ; [ DW_TAG_file_type ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!7 = metadata !{i32 786453, i32 0, null, metadata !"", i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, null, null, null} ; [ DW_TAG_subroutine_type ] [line 0, size 0, align 0, offset 0] [from ]
!8 = metadata !{null, metadata !9, metadata !9}
!9 = metadata !{i32 786447, null, null, metadata !"", i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ] [line 0, size 32, align 32, offset 0] [from float]
!10 = metadata !{i32 786468, null, null, metadata !"float", i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ] [float] [line 0, size 32, align 32, offset 0, enc DW_ATE_float]
!11 = metadata !{void (float*, float*)* @_Z15calcDistancesHWPfS_}
!12 = metadata !{metadata !"calcDistancesHW"}
!13 = metadata !{double (double)* @sqrt}
!14 = metadata !{metadata !"sqrt"}
!15 = metadata !{metadata !"data_hw,32768,,,,,0,copy,,, dists_hw,32,,,,,0,copy,,, "}
!16 = metadata !{metadata !"void.float *.1.float *.1"}
!17 = metadata !{metadata !"double.double.0"}
!18 = metadata !{metadata !"../src/calcDist.h"}
!19 = metadata !{metadata !"/opt/Xilinx/SDx/2016.4/SDK/gnu/aarch32/lin/gcc-arm-linux-gnueabi/arm-linux-gnueabihf/libc/usr/include/bits/mathcalls.h"}
!20 = metadata !{i32 2, metadata !"Dwarf Version", i32 4}
!21 = metadata !{i32 2, metadata !"Debug Info Version", i32 1}
!22 = metadata !{i32 1, metadata !"wchar_size", i32 4}
!23 = metadata !{i32 1, metadata !"min_enum_size", i32 4}
!24 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!25 = metadata !{i32 786689, metadata !4, metadata !"data_hw", metadata !6, i32 16777221, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ] [data_hw] [line 5]
!26 = metadata !{i32 5, i32 29, metadata !4, null}
!27 = metadata !{i32 786689, metadata !4, metadata !"dists_hw", metadata !6, i32 33554437, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ] [dists_hw] [line 5]
!28 = metadata !{i32 5, i32 45, metadata !4, null}
!29 = metadata !{i32 786688, metadata !4, metadata !"data_hw_tmp", metadata !6, i32 7, metadata !30, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [data_hw_tmp] [line 7]
!30 = metadata !{i32 786433, null, null, metadata !"", i32 0, i64 1048576, i64 32, i32 0, i32 0, metadata !10, metadata !31, i32 0, null, null, null} ; [ DW_TAG_array_type ] [line 0, size 1048576, align 32, offset 0] [from float]
!31 = metadata !{metadata !32, metadata !33}
!32 = metadata !{i32 786465, i64 0, i64 1024}     ; [ DW_TAG_subrange_type ] [0, 1023]
!33 = metadata !{i32 786465, i64 0, i64 32}       ; [ DW_TAG_subrange_type ] [0, 31]
!34 = metadata !{i32 7, i32 8, metadata !4, null}
!35 = metadata !{i32 786688, metadata !4, metadata !"movie_tmp", metadata !6, i32 8, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [movie_tmp] [line 8]
!36 = metadata !{i32 786433, null, null, metadata !"", i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !10, metadata !37, i32 0, null, null, null} ; [ DW_TAG_array_type ] [line 0, size 1024, align 32, offset 0] [from float]
!37 = metadata !{metadata !33}
!38 = metadata !{i32 8, i32 8, metadata !4, null} ; [ DW_TAG_imported_declaration ]
!39 = metadata !{i32 786688, metadata !4, metadata !"dists_hw_tmp", metadata !6, i32 9, metadata !40, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [dists_hw_tmp] [line 9]
!40 = metadata !{i32 786433, null, null, metadata !"", i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !10, metadata !41, i32 0, null, null, null} ; [ DW_TAG_array_type ] [line 0, size 32768, align 32, offset 0] [from float]
!41 = metadata !{metadata !32}
!42 = metadata !{i32 9, i32 8, metadata !4, null}
!43 = metadata !{i32 9, i32 2, metadata !4, null}
!44 = metadata !{i32 786688, metadata !45, metadata !"i", metadata !6, i32 12, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i] [line 12]
!45 = metadata !{i32 786443, metadata !5, metadata !4, i32 12, i32 2, i32 0, i32 0} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!46 = metadata !{i32 786468, null, null, metadata !"int", i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ] [int] [line 0, size 32, align 32, offset 0, enc DW_ATE_signed]
!47 = metadata !{i32 12, i32 11, metadata !45, null}
!48 = metadata !{i32 12, i32 7, metadata !45, null}
!49 = metadata !{i32 12, i32 7, metadata !50, null}
!50 = metadata !{i32 786443, metadata !5, metadata !51, i32 12, i32 7, i32 2, i32 15} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!51 = metadata !{i32 786443, metadata !5, metadata !45, i32 12, i32 7, i32 1, i32 12} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!52 = metadata !{i32 786688, metadata !53, metadata !"j", metadata !6, i32 13, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [j] [line 13]
!53 = metadata !{i32 786443, metadata !5, metadata !54, i32 13, i32 3, i32 0, i32 2} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!54 = metadata !{i32 786443, metadata !5, metadata !45, i32 12, i32 39, i32 0, i32 1} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!55 = metadata !{i32 13, i32 12, metadata !53, null}
!56 = metadata !{i32 13, i32 8, metadata !53, null}
!57 = metadata !{i32 13, i32 8, metadata !58, null}
!58 = metadata !{i32 786443, metadata !5, metadata !59, i32 13, i32 8, i32 2, i32 14} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!59 = metadata !{i32 786443, metadata !5, metadata !53, i32 13, i32 8, i32 1, i32 13} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!60 = metadata !{i32 14, i32 4, metadata !61, null}
!61 = metadata !{i32 786443, metadata !5, metadata !53, i32 13, i32 39, i32 0, i32 3} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!62 = metadata !{i32 15, i32 3, metadata !61, null}
!63 = metadata !{i32 13, i32 34, metadata !53, null}
!64 = metadata !{i32 16, i32 2, metadata !54, null}
!65 = metadata !{i32 12, i32 34, metadata !45, null}
!66 = metadata !{i32 16, i32 2, metadata !45, null}
!67 = metadata !{i32 786688, metadata !68, metadata !"i", metadata !6, i32 19, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i] [line 19]
!68 = metadata !{i32 786443, metadata !5, metadata !4, i32 19, i32 2, i32 0, i32 4} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!69 = metadata !{i32 19, i32 11, metadata !68, null}
!70 = metadata !{i32 19, i32 7, metadata !68, null}
!71 = metadata !{i32 19, i32 7, metadata !72, null}
!72 = metadata !{i32 786443, metadata !5, metadata !73, i32 19, i32 7, i32 2, i32 17} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!73 = metadata !{i32 786443, metadata !5, metadata !68, i32 19, i32 7, i32 1, i32 16} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!74 = metadata !{i32 20, i32 3, metadata !75, null}
!75 = metadata !{i32 786443, metadata !5, metadata !68, i32 19, i32 37, i32 0, i32 5} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!76 = metadata !{i32 21, i32 2, metadata !75, null}
!77 = metadata !{i32 19, i32 33, metadata !68, null}
!78 = metadata !{i32 21, i32 2, metadata !68, null}
!79 = metadata !{i32 786688, metadata !80, metadata !"i", metadata !6, i32 24, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i] [line 24]
!80 = metadata !{i32 786443, metadata !5, metadata !4, i32 24, i32 2, i32 0, i32 6} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!81 = metadata !{i32 24, i32 11, metadata !80, null}
!82 = metadata !{i32 24, i32 7, metadata !80, null}
!83 = metadata !{i32 24, i32 7, metadata !84, null}
!84 = metadata !{i32 786443, metadata !5, metadata !85, i32 24, i32 7, i32 2, i32 21} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!85 = metadata !{i32 786443, metadata !5, metadata !80, i32 24, i32 7, i32 1, i32 18} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!86 = metadata !{i32 786688, metadata !87, metadata !"sum", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [sum] [line 25]
!87 = metadata !{i32 786443, metadata !5, metadata !80, i32 24, i32 39, i32 0, i32 7} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!88 = metadata !{i32 25, i32 9, metadata !87, null}
!89 = metadata !{i32 25, i32 3, metadata !87, null}
!90 = metadata !{i32 786688, metadata !87, metadata !"diff", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [diff] [line 25]
!91 = metadata !{i32 25, i32 20, metadata !87, null}
!92 = metadata !{i32 786688, metadata !93, metadata !"j", metadata !6, i32 26, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [j] [line 26]
!93 = metadata !{i32 786443, metadata !5, metadata !87, i32 26, i32 3, i32 0, i32 8} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!94 = metadata !{i32 26, i32 12, metadata !93, null}
!95 = metadata !{i32 26, i32 8, metadata !93, null}
!96 = metadata !{i32 26, i32 8, metadata !97, null}
!97 = metadata !{i32 786443, metadata !5, metadata !98, i32 26, i32 8, i32 2, i32 20} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!98 = metadata !{i32 786443, metadata !5, metadata !93, i32 26, i32 8, i32 1, i32 19} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!99 = metadata !{i32 27, i32 4, metadata !100, null}
!100 = metadata !{i32 786443, metadata !5, metadata !93, i32 26, i32 38, i32 0, i32 9} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!101 = metadata !{i32 28, i32 4, metadata !100, null}
!102 = metadata !{i32 29, i32 3, metadata !100, null}
!103 = metadata !{i32 26, i32 34, metadata !93, null}
!104 = metadata !{i32 30, i32 21, metadata !87, null}
!105 = metadata !{i32 31, i32 2, metadata !87, null}
!106 = metadata !{i32 24, i32 34, metadata !80, null}
!107 = metadata !{i32 31, i32 2, metadata !80, null}
!108 = metadata !{i32 786688, metadata !109, metadata !"i", metadata !6, i32 34, metadata !46, i32 0, i32 0} ; [ DW_TAG_auto_variable ] [i] [line 34]
!109 = metadata !{i32 786443, metadata !5, metadata !4, i32 34, i32 2, i32 0, i32 10} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!110 = metadata !{i32 34, i32 11, metadata !109, null}
!111 = metadata !{i32 34, i32 7, metadata !109, null}
!112 = metadata !{i32 34, i32 7, metadata !113, null}
!113 = metadata !{i32 786443, metadata !5, metadata !114, i32 34, i32 7, i32 2, i32 23} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!114 = metadata !{i32 786443, metadata !5, metadata !109, i32 34, i32 7, i32 1, i32 22} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!115 = metadata !{i32 35, i32 3, metadata !116, null}
!116 = metadata !{i32 786443, metadata !5, metadata !109, i32 34, i32 39, i32 0, i32 11} ; [ DW_TAG_lexical_block ] [/home/sdsocuser/workspace/test/Debug//home/sdsocuser/workspace/test/src/calcDist.cpp]
!117 = metadata !{i32 36, i32 2, metadata !116, null}
!118 = metadata !{i32 34, i32 34, metadata !109, null}
!119 = metadata !{i32 37, i32 1, metadata !4, null}
