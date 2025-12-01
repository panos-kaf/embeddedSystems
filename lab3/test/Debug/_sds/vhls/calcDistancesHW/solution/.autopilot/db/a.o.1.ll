; ModuleID = '/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@calcDistancesHW.str = internal unnamed_addr constant [16 x i8] c"calcDistancesHW\00" ; [#uses=1 type=[16 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"WRITE_DISTS\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [14 x i8] c"COMPUTE_DISTS\00", align 1 ; [#uses=1 type=[14 x i8]*]
@.str3 = private unnamed_addr constant [15 x i8] c"LOAD_MOVIE_TMP\00", align 1 ; [#uses=1 type=[15 x i8]*]
@.str2 = private unnamed_addr constant [17 x i8] c"LOAD_DATA_HW_TMP\00", align 1 ; [#uses=1 type=[17 x i8]*]
@.str1 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1 ; [#uses=1 type=[8 x i8]*]
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]

; [#uses=1]
declare float @llvm.sqrt.f32(float) nounwind readonly

; [#uses=10]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @calcDistancesHW(float* %data_hw, float* %dists_hw) nounwind {
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @calcDistancesHW.str) nounwind
  %data_hw_tmp = alloca [1024 x [32 x float]], align 4 ; [#uses=3 type=[1024 x [32 x float]]*]
  %movie_tmp = alloca [32 x float], align 4       ; [#uses=2 type=[32 x float]*]
  %dists_hw_tmp = alloca [1024 x float], align 4  ; [#uses=2 type=[1024 x float]*]
  call void @llvm.dbg.value(metadata !{float* %data_hw}, i64 0, metadata !25), !dbg !26 ; [debug line = 5:29] [debug variable = data_hw]
  call void @llvm.dbg.value(metadata !{float* %dists_hw}, i64 0, metadata !27), !dbg !28 ; [debug line = 5:45] [debug variable = dists_hw]
  call void (...)* @_ssdm_op_SpecLatency(i32 1, i32 65535, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %data_hw, i8* getelementptr inbounds ([8 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %dists_hw, i8* getelementptr inbounds ([8 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  call void @llvm.dbg.declare(metadata !{[1024 x [32 x float]]* %data_hw_tmp}, metadata !31), !dbg !36 ; [debug line = 7:8] [debug variable = data_hw_tmp]
  call void @llvm.dbg.declare(metadata !{[32 x float]* %movie_tmp}, metadata !37), !dbg !40 ; [debug line = 8:8] [debug variable = movie_tmp]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %dists_hw_tmp}, metadata !41), !dbg !44 ; [debug line = 9:8] [debug variable = dists_hw_tmp]
  br label %1, !dbg !45                           ; [debug line = 12:16]

; <label>:1                                       ; preds = %5, %0
  %i = phi i32 [ 0, %0 ], [ %i.2, %5 ]            ; [#uses=4 type=i32]
  %exitcond5 = icmp eq i32 %i, 1024, !dbg !45     ; [#uses=1 type=i1] [debug line = 12:16]
  br i1 %exitcond5, label %.preheader7.preheader, label %2, !dbg !45 ; [debug line = 12:16]

.preheader7.preheader:                            ; preds = %1
  br label %.preheader7, !dbg !47                 ; [debug line = 19:16]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !49 ; [debug line = 12:34]
  %rbegin8 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !49 ; [#uses=1 type=i32] [debug line = 12:34]
  %tmp = mul i32 %i, 32, !dbg !51                 ; [#uses=1 type=i32] [debug line = 14:4]
  br label %3, !dbg !54                           ; [debug line = 13:17]

; <label>:3                                       ; preds = %4, %2
  %j = phi i32 [ 0, %2 ], [ %j.1, %4 ]            ; [#uses=4 type=i32]
  %exitcond4 = icmp eq i32 %j, 32, !dbg !54       ; [#uses=1 type=i1] [debug line = 13:17]
  br i1 %exitcond4, label %5, label %4, !dbg !54  ; [debug line = 13:17]

; <label>:4                                       ; preds = %3
  %tmp.3 = add nsw i32 %j, %tmp, !dbg !51         ; [#uses=1 type=i32] [debug line = 14:4]
  %data_hw.addr = getelementptr inbounds float* %data_hw, i32 %tmp.3, !dbg !51 ; [#uses=1 type=float*] [debug line = 14:4]
  %data_hw.load = load float* %data_hw.addr, align 4, !dbg !51 ; [#uses=2 type=float] [debug line = 14:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %data_hw.load) nounwind
  %data_hw_tmp.addr.1 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %i, i32 %j, !dbg !51 ; [#uses=1 type=float*] [debug line = 14:4]
  store float %data_hw.load, float* %data_hw_tmp.addr.1, align 4, !dbg !51 ; [debug line = 14:4]
  %j.1 = add nsw i32 %j, 1, !dbg !55              ; [#uses=1 type=i32] [debug line = 13:27]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !56), !dbg !55 ; [debug line = 13:27] [debug variable = j]
  br label %3, !dbg !55                           ; [debug line = 13:27]

; <label>:5                                       ; preds = %3
  %rend9 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0), i32 %rbegin8) nounwind, !dbg !57 ; [#uses=0 type=i32] [debug line = 16:2]
  %i.2 = add nsw i32 %i, 1, !dbg !58              ; [#uses=1 type=i32] [debug line = 12:28]
  call void @llvm.dbg.value(metadata !{i32 %i.2}, i64 0, metadata !59), !dbg !58 ; [debug line = 12:28] [debug variable = i]
  br label %1, !dbg !58                           ; [debug line = 12:28]

.preheader7:                                      ; preds = %6, %.preheader7.preheader
  %i1 = phi i32 [ %i.1, %6 ], [ 0, %.preheader7.preheader ] ; [#uses=4 type=i32]
  %exitcond3 = icmp eq i32 %i1, 32, !dbg !47      ; [#uses=1 type=i1] [debug line = 19:16]
  br i1 %exitcond3, label %.preheader6.preheader, label %6, !dbg !47 ; [debug line = 19:16]

.preheader6.preheader:                            ; preds = %.preheader7
  br label %.preheader6, !dbg !60                 ; [debug line = 24:16]

; <label>:6                                       ; preds = %.preheader7
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !62 ; [debug line = 19:31]
  %rbegin1 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !62 ; [#uses=1 type=i32] [debug line = 19:31]
  %data_hw_tmp.addr = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 0, i32 %i1, !dbg !64 ; [#uses=1 type=float*] [debug line = 20:3]
  %data_hw_tmp.load = load float* %data_hw_tmp.addr, align 4, !dbg !64 ; [#uses=2 type=float] [debug line = 20:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %data_hw_tmp.load) nounwind
  %movie_tmp.addr = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %i1, !dbg !64 ; [#uses=1 type=float*] [debug line = 20:3]
  store float %data_hw_tmp.load, float* %movie_tmp.addr, align 4, !dbg !64 ; [debug line = 20:3]
  %rend11 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0), i32 %rbegin1) nounwind, !dbg !65 ; [#uses=0 type=i32] [debug line = 21:2]
  %i.1 = add nsw i32 %i1, 1, !dbg !66             ; [#uses=1 type=i32] [debug line = 19:26]
  call void @llvm.dbg.value(metadata !{i32 %i.1}, i64 0, metadata !67), !dbg !66 ; [debug line = 19:26] [debug variable = i]
  br label %.preheader7, !dbg !66                 ; [debug line = 19:26]

.preheader6:                                      ; preds = %10, %.preheader6.preheader
  %i2 = phi i32 [ %i.4, %10 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i32]
  %exitcond2 = icmp eq i32 %i2, 1024, !dbg !60    ; [#uses=1 type=i1] [debug line = 24:16]
  br i1 %exitcond2, label %.preheader.preheader, label %7, !dbg !60 ; [debug line = 24:16]

.preheader.preheader:                             ; preds = %.preheader6
  br label %.preheader, !dbg !68                  ; [debug line = 34:16]

; <label>:7                                       ; preds = %.preheader6
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !70 ; [debug line = 24:34]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !70 ; [#uses=1 type=i32] [debug line = 24:34]
  br label %8, !dbg !72                           ; [debug line = 26:17]

; <label>:8                                       ; preds = %9, %7
  %sum = phi float [ 0.000000e+00, %7 ], [ %sum.1, %9 ] ; [#uses=2 type=float]
  %j3 = phi i32 [ 0, %7 ], [ %j.2, %9 ]           ; [#uses=4 type=i32]
  %exitcond1 = icmp eq i32 %j3, 32, !dbg !72      ; [#uses=1 type=i1] [debug line = 26:17]
  br i1 %exitcond1, label %10, label %9, !dbg !72 ; [debug line = 26:17]

; <label>:9                                       ; preds = %8
  %data_hw_tmp.addr.2 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %i2, i32 %j3, !dbg !74 ; [#uses=1 type=float*] [debug line = 27:4]
  %data_hw_tmp.load.1 = load float* %data_hw_tmp.addr.2, align 4, !dbg !74 ; [#uses=2 type=float] [debug line = 27:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %data_hw_tmp.load.1) nounwind
  %movie_tmp.addr.1 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %j3, !dbg !74 ; [#uses=1 type=float*] [debug line = 27:4]
  %movie_tmp.load = load float* %movie_tmp.addr.1, align 4, !dbg !74 ; [#uses=2 type=float] [debug line = 27:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %movie_tmp.load) nounwind
  %diff = fsub float %data_hw_tmp.load.1, %movie_tmp.load, !dbg !74 ; [#uses=2 type=float] [debug line = 27:4]
  call void @llvm.dbg.value(metadata !{float %diff}, i64 0, metadata !76), !dbg !74 ; [debug line = 27:4] [debug variable = diff]
  %tmp.9 = fmul float %diff, %diff, !dbg !77      ; [#uses=1 type=float] [debug line = 28:4]
  %sum.1 = fadd float %sum, %tmp.9, !dbg !77      ; [#uses=1 type=float] [debug line = 28:4]
  call void @llvm.dbg.value(metadata !{float %sum.1}, i64 0, metadata !78), !dbg !77 ; [debug line = 28:4] [debug variable = sum]
  %j.2 = add nsw i32 %j3, 1, !dbg !79             ; [#uses=1 type=i32] [debug line = 26:27]
  call void @llvm.dbg.value(metadata !{i32 %j.2}, i64 0, metadata !80), !dbg !79 ; [debug line = 26:27] [debug variable = j]
  br label %8, !dbg !79                           ; [debug line = 26:27]

; <label>:10                                      ; preds = %8
  %sum.0.lcssa = phi float [ %sum, %8 ]           ; [#uses=1 type=float]
  %tmp.6 = call float @llvm.sqrt.f32(float %sum.0.lcssa), !dbg !81 ; [#uses=1 type=float] [debug line = 30:21]
  %dists_hw_tmp.addr.1 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i2, !dbg !81 ; [#uses=1 type=float*] [debug line = 30:21]
  store float %tmp.6, float* %dists_hw_tmp.addr.1, align 4, !dbg !81 ; [debug line = 30:21]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0), i32 %rbegin) nounwind, !dbg !82 ; [#uses=0 type=i32] [debug line = 31:2]
  %i.4 = add nsw i32 %i2, 1, !dbg !83             ; [#uses=1 type=i32] [debug line = 24:28]
  call void @llvm.dbg.value(metadata !{i32 %i.4}, i64 0, metadata !84), !dbg !83 ; [debug line = 24:28] [debug variable = i]
  br label %.preheader6, !dbg !83                 ; [debug line = 24:28]

.preheader:                                       ; preds = %11, %.preheader.preheader
  %i4 = phi i32 [ %i.3, %11 ], [ 0, %.preheader.preheader ] ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %i4, 1024, !dbg !68     ; [#uses=1 type=i1] [debug line = 34:16]
  br i1 %exitcond, label %12, label %11, !dbg !68 ; [debug line = 34:16]

; <label>:11                                      ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !85 ; [debug line = 34:34]
  %rbegin2 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !85 ; [#uses=1 type=i32] [debug line = 34:34]
  %dists_hw_tmp.addr = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i4, !dbg !87 ; [#uses=1 type=float*] [debug line = 35:3]
  %dists_hw_tmp.load = load float* %dists_hw_tmp.addr, align 4, !dbg !87 ; [#uses=2 type=float] [debug line = 35:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %dists_hw_tmp.load) nounwind
  %dists_hw.addr = getelementptr inbounds float* %dists_hw, i32 %i4, !dbg !87 ; [#uses=1 type=float*] [debug line = 35:3]
  store float %dists_hw_tmp.load, float* %dists_hw.addr, align 4, !dbg !87 ; [debug line = 35:3]
  %rend13 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0), i32 %rbegin2) nounwind, !dbg !88 ; [#uses=0 type=i32] [debug line = 36:2]
  %i.3 = add nsw i32 %i4, 1, !dbg !89             ; [#uses=1 type=i32] [debug line = 34:28]
  call void @llvm.dbg.value(metadata !{i32 %i.3}, i64 0, metadata !90), !dbg !89 ; [debug line = 34:28] [debug variable = i]
  br label %.preheader, !dbg !89                  ; [debug line = 34:28]

; <label>:12                                      ; preds = %.preheader
  ret void, !dbg !91                              ; [debug line = 37:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=4]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecLatency(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=5]
declare void @_ssdm_SpecKeepArrayLoad(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/calcDist.pragma.2.cpp", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !13} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"calcDistancesHW", metadata !"calcDistancesHW", metadata !"_Z15calcDistancesHWPfS_", metadata !6, i32 5, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @calcDistancesHW, null, null, metadata !11, i32 6} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sdsocuser/workspace/test/src/calcDist.cpp", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !9}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!11 = metadata !{metadata !12}
!12 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!13 = metadata !{metadata !14}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 786484, i32 0, null, metadata !"signgam", metadata !"signgam", metadata !"", metadata !16, i32 489, metadata !17, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!16 = metadata !{i32 786473, metadata !"/usr/include/math.h", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", null} ; [ DW_TAG_file_type ]
!17 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!18 = metadata !{void (float*, float*)* @calcDistancesHW, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24}
!19 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!20 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float*"}
!22 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"data_hw", metadata !"dists_hw"}
!24 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!25 = metadata !{i32 786689, metadata !5, metadata !"data_hw", metadata !6, i32 16777221, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!26 = metadata !{i32 5, i32 29, metadata !5, null}
!27 = metadata !{i32 786689, metadata !5, metadata !"dists_hw", metadata !6, i32 33554437, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 5, i32 45, metadata !5, null}
!29 = metadata !{i32 7, i32 1, metadata !30, null}
!30 = metadata !{i32 786443, metadata !5, i32 6, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!31 = metadata !{i32 786688, metadata !30, metadata !"data_hw_tmp", metadata !6, i32 7, metadata !32, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!32 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1048576, i64 32, i32 0, i32 0, metadata !10, metadata !33, i32 0, i32 0} ; [ DW_TAG_array_type ]
!33 = metadata !{metadata !34, metadata !35}
!34 = metadata !{i32 786465, i64 0, i64 1023}     ; [ DW_TAG_subrange_type ]
!35 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!36 = metadata !{i32 7, i32 8, metadata !30, null}
!37 = metadata !{i32 786688, metadata !30, metadata !"movie_tmp", metadata !6, i32 8, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!38 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !10, metadata !39, i32 0, i32 0} ; [ DW_TAG_array_type ]
!39 = metadata !{metadata !35}
!40 = metadata !{i32 8, i32 8, metadata !30, null}
!41 = metadata !{i32 786688, metadata !30, metadata !"dists_hw_tmp", metadata !6, i32 9, metadata !42, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !10, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !34}
!44 = metadata !{i32 9, i32 8, metadata !30, null}
!45 = metadata !{i32 12, i32 16, metadata !46, null}
!46 = metadata !{i32 786443, metadata !30, i32 12, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!47 = metadata !{i32 19, i32 16, metadata !48, null}
!48 = metadata !{i32 786443, metadata !30, i32 19, i32 2, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 12, i32 34, metadata !50, null}
!50 = metadata !{i32 786443, metadata !46, i32 12, i32 33, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!51 = metadata !{i32 14, i32 4, metadata !52, null}
!52 = metadata !{i32 786443, metadata !53, i32 13, i32 32, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!53 = metadata !{i32 786443, metadata !50, i32 13, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 13, i32 17, metadata !53, null}
!55 = metadata !{i32 13, i32 27, metadata !53, null}
!56 = metadata !{i32 786688, metadata !53, metadata !"j", metadata !6, i32 13, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 16, i32 2, metadata !50, null}
!58 = metadata !{i32 12, i32 28, metadata !46, null}
!59 = metadata !{i32 786688, metadata !46, metadata !"i", metadata !6, i32 12, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!60 = metadata !{i32 24, i32 16, metadata !61, null}
!61 = metadata !{i32 786443, metadata !30, i32 24, i32 2, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!62 = metadata !{i32 19, i32 31, metadata !63, null}
!63 = metadata !{i32 786443, metadata !48, i32 19, i32 30, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 20, i32 3, metadata !63, null}
!65 = metadata !{i32 21, i32 2, metadata !63, null}
!66 = metadata !{i32 19, i32 26, metadata !48, null}
!67 = metadata !{i32 786688, metadata !48, metadata !"i", metadata !6, i32 19, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 34, i32 16, metadata !69, null}
!69 = metadata !{i32 786443, metadata !30, i32 34, i32 2, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 24, i32 34, metadata !71, null}
!71 = metadata !{i32 786443, metadata !61, i32 24, i32 33, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!72 = metadata !{i32 26, i32 17, metadata !73, null}
!73 = metadata !{i32 786443, metadata !71, i32 26, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!74 = metadata !{i32 27, i32 4, metadata !75, null}
!75 = metadata !{i32 786443, metadata !73, i32 26, i32 31, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 786688, metadata !71, metadata !"diff", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!77 = metadata !{i32 28, i32 4, metadata !75, null}
!78 = metadata !{i32 786688, metadata !71, metadata !"sum", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!79 = metadata !{i32 26, i32 27, metadata !73, null}
!80 = metadata !{i32 786688, metadata !73, metadata !"j", metadata !6, i32 26, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!81 = metadata !{i32 30, i32 21, metadata !71, null}
!82 = metadata !{i32 31, i32 2, metadata !71, null}
!83 = metadata !{i32 24, i32 28, metadata !61, null}
!84 = metadata !{i32 786688, metadata !61, metadata !"i", metadata !6, i32 24, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!85 = metadata !{i32 34, i32 34, metadata !86, null}
!86 = metadata !{i32 786443, metadata !69, i32 34, i32 33, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 35, i32 3, metadata !86, null}
!88 = metadata !{i32 36, i32 2, metadata !86, null}
!89 = metadata !{i32 34, i32 28, metadata !69, null}
!90 = metadata !{i32 786688, metadata !69, metadata !"i", metadata !6, i32 34, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!91 = metadata !{i32 37, i32 1, metadata !30, null}
