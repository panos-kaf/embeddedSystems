; ModuleID = '/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@calcDistancesHW_str = internal unnamed_addr constant [16 x i8] c"calcDistancesHW\00" ; [#uses=1 type=[16 x i8]*]
@p_str5 = private unnamed_addr constant [12 x i8] c"WRITE_DISTS\00", align 1 ; [#uses=1 type=[12 x i8]*]
@p_str4 = private unnamed_addr constant [14 x i8] c"COMPUTE_DISTS\00", align 1 ; [#uses=3 type=[14 x i8]*]
@p_str3 = private unnamed_addr constant [15 x i8] c"LOAD_MOVIE_TMP\00", align 1 ; [#uses=1 type=[15 x i8]*]
@p_str2 = private unnamed_addr constant [17 x i8] c"LOAD_DATA_HW_TMP\00", align 1 ; [#uses=3 type=[17 x i8]*]
@p_str1 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1 ; [#uses=2 type=[8 x i8]*]
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=13 type=[1 x i8]*]

; [#uses=1]
declare float @llvm.sqrt.f32(float) nounwind readonly

; [#uses=10]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @calcDistancesHW(float* %data_hw, float* %dists_hw) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data_hw) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap(float* %dists_hw) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @calcDistancesHW_str) nounwind
  %data_hw_tmp = alloca [32768 x float], align 4  ; [#uses=3 type=[32768 x float]*]
  %movie_tmp = alloca [32 x float], align 4       ; [#uses=2 type=[32 x float]*]
  %dists_hw_tmp = alloca [1024 x float], align 4  ; [#uses=2 type=[1024 x float]*]
  call void @llvm.dbg.value(metadata !{float* %data_hw}, i64 0, metadata !17), !dbg !26 ; [debug line = 5:29] [debug variable = data_hw]
  call void @llvm.dbg.value(metadata !{float* %dists_hw}, i64 0, metadata !27), !dbg !28 ; [debug line = 5:45] [debug variable = dists_hw]
  call void (...)* @_ssdm_op_SpecLatency(i32 1, i32 65535, [1 x i8]* @p_str) nounwind, !dbg !29 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %data_hw, [8 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind, !dbg !29 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %dists_hw, [8 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind, !dbg !29 ; [debug line = 7:1]
  call void @llvm.dbg.declare(metadata !{[32768 x float]* %data_hw_tmp}, metadata !31), !dbg !36 ; [debug line = 7:8] [debug variable = data_hw_tmp]
  call void @llvm.dbg.declare(metadata !{[32 x float]* %movie_tmp}, metadata !37), !dbg !40 ; [debug line = 8:8] [debug variable = movie_tmp]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %dists_hw_tmp}, metadata !41), !dbg !44 ; [debug line = 9:8] [debug variable = dists_hw_tmp]
  br label %1, !dbg !45                           ; [debug line = 12:16]

; <label>:1                                       ; preds = %5, %0
  %i = phi i11 [ 0, %0 ], [ %i_2, %5 ]            ; [#uses=3 type=i11]
  %tmp_4 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %i, i5 0) ; [#uses=1 type=i16]
  %tmp_5_cast = zext i16 %tmp_4 to i17, !dbg !45  ; [#uses=1 type=i17] [debug line = 12:16]
  %exitcond5 = icmp eq i11 %i, -1024, !dbg !45    ; [#uses=1 type=i1] [debug line = 12:16]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  %i_2 = add i11 %i, 1, !dbg !47                  ; [#uses=1 type=i11] [debug line = 12:28]
  br i1 %exitcond5, label %.preheader7.preheader, label %2, !dbg !45 ; [debug line = 12:16]

.preheader7.preheader:                            ; preds = %1
  br label %.preheader7, !dbg !48                 ; [debug line = 19:16]

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([17 x i8]* @p_str2) nounwind, !dbg !50 ; [debug line = 12:34]
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([17 x i8]* @p_str2) nounwind, !dbg !50 ; [#uses=1 type=i32] [debug line = 12:34]
  br label %3, !dbg !52                           ; [debug line = 13:17]

; <label>:3                                       ; preds = %4, %2
  %j = phi i6 [ 0, %2 ], [ %j_1, %4 ]             ; [#uses=3 type=i6]
  %j_cast5_cast = zext i6 %j to i17, !dbg !54     ; [#uses=1 type=i17] [debug line = 14:4]
  %tmp_8 = add i17 %tmp_5_cast, %j_cast5_cast, !dbg !54 ; [#uses=1 type=i17] [debug line = 14:4]
  %tmp_8_cast = zext i17 %tmp_8 to i32, !dbg !54  ; [#uses=1 type=i32] [debug line = 14:4]
  %data_hw_tmp_addr_1 = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %tmp_8_cast, !dbg !54 ; [#uses=1 type=float*] [debug line = 14:4]
  %exitcond4 = icmp eq i6 %j, -32, !dbg !52       ; [#uses=1 type=i1] [debug line = 13:17]
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  %j_1 = add i6 %j, 1, !dbg !56                   ; [#uses=1 type=i6] [debug line = 13:27]
  br i1 %exitcond4, label %5, label %4, !dbg !52  ; [debug line = 13:17]

; <label>:4                                       ; preds = %3
  %data_hw_read = call float @_ssdm_op_Read.ap_fifo.floatP(float* %data_hw) nounwind, !dbg !54 ; [#uses=1 type=float] [debug line = 14:4]
  store float %data_hw_read, float* %data_hw_tmp_addr_1, align 4, !dbg !54 ; [debug line = 14:4]
  call void @llvm.dbg.value(metadata !{i6 %j_1}, i64 0, metadata !57), !dbg !56 ; [debug line = 13:27] [debug variable = j]
  br label %3, !dbg !56                           ; [debug line = 13:27]

; <label>:5                                       ; preds = %3
  %empty_5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([17 x i8]* @p_str2, i32 %tmp_1) nounwind, !dbg !59 ; [#uses=0 type=i32] [debug line = 16:2]
  call void @llvm.dbg.value(metadata !{i11 %i_2}, i64 0, metadata !60), !dbg !47 ; [debug line = 12:28] [debug variable = i]
  br label %1, !dbg !47                           ; [debug line = 12:28]

.preheader7:                                      ; preds = %6, %.preheader7.preheader
  %i1 = phi i6 [ %i_1, %6 ], [ 0, %.preheader7.preheader ] ; [#uses=3 type=i6]
  %i1_cast4 = zext i6 %i1 to i32, !dbg !48        ; [#uses=2 type=i32] [debug line = 19:16]
  %data_hw_tmp_addr = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %i1_cast4, !dbg !61 ; [#uses=1 type=float*] [debug line = 20:3]
  %exitcond3 = icmp eq i6 %i1, -32, !dbg !48      ; [#uses=1 type=i1] [debug line = 19:16]
  %empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  %i_1 = add i6 %i1, 1, !dbg !63                  ; [#uses=1 type=i6] [debug line = 19:26]
  br i1 %exitcond3, label %.preheader6.preheader, label %6, !dbg !48 ; [debug line = 19:16]

.preheader6.preheader:                            ; preds = %.preheader7
  br label %.preheader6, !dbg !64                 ; [debug line = 24:16]

; <label>:6                                       ; preds = %.preheader7
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str3) nounwind, !dbg !66 ; [debug line = 19:31]
  %data_hw_tmp_load = load float* %data_hw_tmp_addr, align 4, !dbg !61 ; [#uses=1 type=float] [debug line = 20:3]
  %movie_tmp_addr = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %i1_cast4, !dbg !61 ; [#uses=1 type=float*] [debug line = 20:3]
  store float %data_hw_tmp_load, float* %movie_tmp_addr, align 4, !dbg !61 ; [debug line = 20:3]
  call void @llvm.dbg.value(metadata !{i6 %i_1}, i64 0, metadata !67), !dbg !63 ; [debug line = 19:26] [debug variable = i]
  br label %.preheader7, !dbg !63                 ; [debug line = 19:26]

.preheader6:                                      ; preds = %10, %.preheader6.preheader
  %i2 = phi i11 [ %i_4, %10 ], [ 0, %.preheader6.preheader ] ; [#uses=4 type=i11]
  %i2_cast3 = zext i11 %i2 to i32, !dbg !64       ; [#uses=1 type=i32] [debug line = 24:16]
  %tmp_s = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %i2, i5 0) ; [#uses=1 type=i16]
  %tmp_11_cast = zext i16 %tmp_s to i17, !dbg !64 ; [#uses=1 type=i17] [debug line = 24:16]
  %exitcond2 = icmp eq i11 %i2, -1024, !dbg !64   ; [#uses=1 type=i1] [debug line = 24:16]
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  %i_4 = add i11 %i2, 1, !dbg !68                 ; [#uses=1 type=i11] [debug line = 24:28]
  br i1 %exitcond2, label %.preheader.preheader, label %7, !dbg !64 ; [debug line = 24:16]

.preheader.preheader:                             ; preds = %.preheader6
  br label %.preheader, !dbg !69                  ; [debug line = 34:16]

; <label>:7                                       ; preds = %.preheader6
  call void (...)* @_ssdm_op_SpecLoopName([14 x i8]* @p_str4) nounwind, !dbg !71 ; [debug line = 24:34]
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([14 x i8]* @p_str4) nounwind, !dbg !71 ; [#uses=1 type=i32] [debug line = 24:34]
  br label %8, !dbg !73                           ; [debug line = 26:17]

; <label>:8                                       ; preds = %9, %7
  %sum = phi float [ 0.000000e+00, %7 ], [ %sum_1, %9 ] ; [#uses=2 type=float]
  %j3 = phi i6 [ 0, %7 ], [ %j_2, %9 ]            ; [#uses=4 type=i6]
  %j3_cast2 = zext i6 %j3 to i32, !dbg !73        ; [#uses=1 type=i32] [debug line = 26:17]
  %j3_cast2_cast = zext i6 %j3 to i17, !dbg !75   ; [#uses=1 type=i17] [debug line = 27:4]
  %tmp_3 = add i17 %tmp_11_cast, %j3_cast2_cast, !dbg !75 ; [#uses=1 type=i17] [debug line = 27:4]
  %tmp_12_cast = zext i17 %tmp_3 to i32, !dbg !75 ; [#uses=1 type=i32] [debug line = 27:4]
  %data_hw_tmp_addr_2 = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %tmp_12_cast, !dbg !75 ; [#uses=1 type=float*] [debug line = 27:4]
  %exitcond1 = icmp eq i6 %j3, -32, !dbg !73      ; [#uses=1 type=i1] [debug line = 26:17]
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  %j_2 = add i6 %j3, 1, !dbg !77                  ; [#uses=1 type=i6] [debug line = 26:27]
  br i1 %exitcond1, label %10, label %9, !dbg !73 ; [debug line = 26:17]

; <label>:9                                       ; preds = %8
  %data_hw_tmp_load_1 = load float* %data_hw_tmp_addr_2, align 4, !dbg !75 ; [#uses=1 type=float] [debug line = 27:4]
  %movie_tmp_addr_1 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %j3_cast2, !dbg !75 ; [#uses=1 type=float*] [debug line = 27:4]
  %movie_tmp_load = load float* %movie_tmp_addr_1, align 4, !dbg !75 ; [#uses=1 type=float] [debug line = 27:4]
  %diff = fsub float %data_hw_tmp_load_1, %movie_tmp_load, !dbg !75 ; [#uses=2 type=float] [debug line = 27:4]
  call void @llvm.dbg.value(metadata !{float %diff}, i64 0, metadata !78), !dbg !75 ; [debug line = 27:4] [debug variable = diff]
  %tmp_9 = fmul float %diff, %diff, !dbg !79      ; [#uses=1 type=float] [debug line = 28:4]
  %sum_1 = fadd float %sum, %tmp_9, !dbg !79      ; [#uses=1 type=float] [debug line = 28:4]
  call void @llvm.dbg.value(metadata !{float %sum_1}, i64 0, metadata !80), !dbg !79 ; [debug line = 28:4] [debug variable = sum]
  call void @llvm.dbg.value(metadata !{i6 %j_2}, i64 0, metadata !81), !dbg !77 ; [debug line = 26:27] [debug variable = j]
  br label %8, !dbg !77                           ; [debug line = 26:27]

; <label>:10                                      ; preds = %8
  %tmp_6 = call float @llvm.sqrt.f32(float %sum), !dbg !82 ; [#uses=1 type=float] [debug line = 30:21]
  %dists_hw_tmp_addr_1 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i2_cast3, !dbg !82 ; [#uses=1 type=float*] [debug line = 30:21]
  store float %tmp_6, float* %dists_hw_tmp_addr_1, align 4, !dbg !82 ; [debug line = 30:21]
  %empty_9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([14 x i8]* @p_str4, i32 %tmp_2) nounwind, !dbg !83 ; [#uses=0 type=i32] [debug line = 31:2]
  call void @llvm.dbg.value(metadata !{i11 %i_4}, i64 0, metadata !84), !dbg !68 ; [debug line = 24:28] [debug variable = i]
  br label %.preheader6, !dbg !68                 ; [debug line = 24:28]

.preheader:                                       ; preds = %11, %.preheader.preheader
  %i4 = phi i11 [ %i_3, %11 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i11]
  %i4_cast1 = zext i11 %i4 to i32, !dbg !69       ; [#uses=1 type=i32] [debug line = 34:16]
  %exitcond = icmp eq i11 %i4, -1024, !dbg !69    ; [#uses=1 type=i1] [debug line = 34:16]
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  %i_3 = add i11 %i4, 1, !dbg !85                 ; [#uses=1 type=i11] [debug line = 34:28]
  br i1 %exitcond, label %12, label %11, !dbg !69 ; [debug line = 34:16]

; <label>:11                                      ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @p_str5) nounwind, !dbg !86 ; [debug line = 34:34]
  %dists_hw_tmp_addr = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i4_cast1, !dbg !88 ; [#uses=1 type=float*] [debug line = 35:3]
  %dists_hw_tmp_load = load float* %dists_hw_tmp_addr, align 4, !dbg !88 ; [#uses=1 type=float] [debug line = 35:3]
  call void @_ssdm_op_Write.ap_fifo.floatP(float* %dists_hw, float %dists_hw_tmp_load) nounwind, !dbg !88 ; [debug line = 35:3]
  call void @llvm.dbg.value(metadata !{i11 %i_3}, i64 0, metadata !89), !dbg !85 ; [debug line = 34:28] [debug variable = i]
  br label %.preheader, !dbg !85                  ; [debug line = 34:28]

; <label>:12                                      ; preds = %.preheader
  ret void, !dbg !90                              ; [debug line = 37:1]
}

; [#uses=1]
define weak void @_ssdm_op_Write.ap_fifo.floatP(float*, float) {
entry:
  %empty = call float @_autotb_FifoWrite_float(float* %0, float %1) ; [#uses=0 type=float]
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=6]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecLatency(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak float @_ssdm_op_Read.ap_fifo.floatP(float*) {
entry:
  %empty = call float @_autotb_FifoRead_float(float* %0) ; [#uses=1 type=float]
  ret float %empty
}

; [#uses=2]
define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16                     ; [#uses=1 type=i16]
  %empty_11 = zext i5 %1 to i16                   ; [#uses=1 type=i16]
  %empty_12 = shl i16 %empty, 5                   ; [#uses=1 type=i16]
  %empty_13 = or i16 %empty_12, %empty_11         ; [#uses=1 type=i16]
  ret i16 %empty_13
}

; [#uses=1]
declare float @_autotb_FifoWrite_float(float*, float)

; [#uses=1]
declare float @_autotb_FifoRead_float(float*)

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{void (float*, float*)* @calcDistancesHW, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"float*", metadata !"float*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"data_hw", metadata !"dists_hw"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{metadata !8}
!8 = metadata !{i32 0, i32 31, metadata !9}
!9 = metadata !{metadata !10}
!10 = metadata !{metadata !"data_hw", metadata !11, metadata !"float", i32 0, i32 31}
!11 = metadata !{metadata !12}
!12 = metadata !{i32 0, i32 0, i32 1}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"dists_hw", metadata !11, metadata !"float", i32 0, i32 31}
!17 = metadata !{i32 786689, metadata !18, metadata !"data_hw", metadata !19, i32 16777221, metadata !22, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!18 = metadata !{i32 786478, i32 0, metadata !19, metadata !"calcDistancesHW", metadata !"calcDistancesHW", metadata !"_Z15calcDistancesHWPfS_", metadata !19, i32 5, metadata !20, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @calcDistancesHW, null, null, metadata !24, i32 6} ; [ DW_TAG_subprogram ]
!19 = metadata !{i32 786473, metadata !"/home/sdsocuser/workspace/test/src/calcDist.cpp", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", null} ; [ DW_TAG_file_type ]
!20 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !21, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!21 = metadata !{null, metadata !22, metadata !22}
!22 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !23} ; [ DW_TAG_pointer_type ]
!23 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!24 = metadata !{metadata !25}
!25 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!26 = metadata !{i32 5, i32 29, metadata !18, null}
!27 = metadata !{i32 786689, metadata !18, metadata !"dists_hw", metadata !19, i32 33554437, metadata !22, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!28 = metadata !{i32 5, i32 45, metadata !18, null}
!29 = metadata !{i32 7, i32 1, metadata !30, null}
!30 = metadata !{i32 786443, metadata !18, i32 6, i32 1, metadata !19, i32 0} ; [ DW_TAG_lexical_block ]
!31 = metadata !{i32 786688, metadata !30, metadata !"data_hw_tmp", metadata !19, i32 7, metadata !32, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!32 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1048576, i64 32, i32 0, i32 0, metadata !23, metadata !33, i32 0, i32 0} ; [ DW_TAG_array_type ]
!33 = metadata !{metadata !34, metadata !35}
!34 = metadata !{i32 786465, i64 0, i64 1023}     ; [ DW_TAG_subrange_type ]
!35 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!36 = metadata !{i32 7, i32 8, metadata !30, null}
!37 = metadata !{i32 786688, metadata !30, metadata !"movie_tmp", metadata !19, i32 8, metadata !38, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!38 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !23, metadata !39, i32 0, i32 0} ; [ DW_TAG_array_type ]
!39 = metadata !{metadata !35}
!40 = metadata !{i32 8, i32 8, metadata !30, null}
!41 = metadata !{i32 786688, metadata !30, metadata !"dists_hw_tmp", metadata !19, i32 9, metadata !42, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !23, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !34}
!44 = metadata !{i32 9, i32 8, metadata !30, null}
!45 = metadata !{i32 12, i32 16, metadata !46, null}
!46 = metadata !{i32 786443, metadata !30, i32 12, i32 2, metadata !19, i32 1} ; [ DW_TAG_lexical_block ]
!47 = metadata !{i32 12, i32 28, metadata !46, null}
!48 = metadata !{i32 19, i32 16, metadata !49, null}
!49 = metadata !{i32 786443, metadata !30, i32 19, i32 2, metadata !19, i32 5} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 12, i32 34, metadata !51, null}
!51 = metadata !{i32 786443, metadata !46, i32 12, i32 33, metadata !19, i32 2} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 13, i32 17, metadata !53, null}
!53 = metadata !{i32 786443, metadata !51, i32 13, i32 3, metadata !19, i32 3} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 14, i32 4, metadata !55, null}
!55 = metadata !{i32 786443, metadata !53, i32 13, i32 32, metadata !19, i32 4} ; [ DW_TAG_lexical_block ]
!56 = metadata !{i32 13, i32 27, metadata !53, null}
!57 = metadata !{i32 786688, metadata !53, metadata !"j", metadata !19, i32 13, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!58 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!59 = metadata !{i32 16, i32 2, metadata !51, null}
!60 = metadata !{i32 786688, metadata !46, metadata !"i", metadata !19, i32 12, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 20, i32 3, metadata !62, null}
!62 = metadata !{i32 786443, metadata !49, i32 19, i32 30, metadata !19, i32 6} ; [ DW_TAG_lexical_block ]
!63 = metadata !{i32 19, i32 26, metadata !49, null}
!64 = metadata !{i32 24, i32 16, metadata !65, null}
!65 = metadata !{i32 786443, metadata !30, i32 24, i32 2, metadata !19, i32 7} ; [ DW_TAG_lexical_block ]
!66 = metadata !{i32 19, i32 31, metadata !62, null}
!67 = metadata !{i32 786688, metadata !49, metadata !"i", metadata !19, i32 19, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!68 = metadata !{i32 24, i32 28, metadata !65, null}
!69 = metadata !{i32 34, i32 16, metadata !70, null}
!70 = metadata !{i32 786443, metadata !30, i32 34, i32 2, metadata !19, i32 11} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 24, i32 34, metadata !72, null}
!72 = metadata !{i32 786443, metadata !65, i32 24, i32 33, metadata !19, i32 8} ; [ DW_TAG_lexical_block ]
!73 = metadata !{i32 26, i32 17, metadata !74, null}
!74 = metadata !{i32 786443, metadata !72, i32 26, i32 3, metadata !19, i32 9} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 27, i32 4, metadata !76, null}
!76 = metadata !{i32 786443, metadata !74, i32 26, i32 31, metadata !19, i32 10} ; [ DW_TAG_lexical_block ]
!77 = metadata !{i32 26, i32 27, metadata !74, null}
!78 = metadata !{i32 786688, metadata !72, metadata !"diff", metadata !19, i32 25, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!79 = metadata !{i32 28, i32 4, metadata !76, null}
!80 = metadata !{i32 786688, metadata !72, metadata !"sum", metadata !19, i32 25, metadata !23, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!81 = metadata !{i32 786688, metadata !74, metadata !"j", metadata !19, i32 26, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!82 = metadata !{i32 30, i32 21, metadata !72, null}
!83 = metadata !{i32 31, i32 2, metadata !72, null}
!84 = metadata !{i32 786688, metadata !65, metadata !"i", metadata !19, i32 24, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!85 = metadata !{i32 34, i32 28, metadata !70, null}
!86 = metadata !{i32 34, i32 34, metadata !87, null}
!87 = metadata !{i32 786443, metadata !70, i32 34, i32 33, metadata !19, i32 12} ; [ DW_TAG_lexical_block ]
!88 = metadata !{i32 35, i32 3, metadata !87, null}
!89 = metadata !{i32 786688, metadata !70, metadata !"i", metadata !19, i32 34, metadata !58, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!90 = metadata !{i32 37, i32 1, metadata !30, null}
