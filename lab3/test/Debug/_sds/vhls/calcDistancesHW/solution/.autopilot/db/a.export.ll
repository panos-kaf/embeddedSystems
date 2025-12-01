; ModuleID = '/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@calcDistancesHW_str = internal unnamed_addr constant [16 x i8] c"calcDistancesHW\00"
@p_str5 = private unnamed_addr constant [12 x i8] c"WRITE_DISTS\00", align 1
@p_str4 = private unnamed_addr constant [14 x i8] c"COMPUTE_DISTS\00", align 1
@p_str3 = private unnamed_addr constant [15 x i8] c"LOAD_MOVIE_TMP\00", align 1
@p_str2 = private unnamed_addr constant [17 x i8] c"LOAD_DATA_HW_TMP\00", align 1
@p_str1 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

declare float @llvm.sqrt.f32(float) nounwind readonly

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define void @calcDistancesHW(float* %data_hw, float* %dists_hw) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data_hw) nounwind, !map !7
  call void (...)* @_ssdm_op_SpecBitsMap(float* %dists_hw) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @calcDistancesHW_str) nounwind
  %data_hw_tmp = alloca [32768 x float], align 4
  %movie_tmp = alloca [32 x float], align 4
  %dists_hw_tmp = alloca [1024 x float], align 4
  call void (...)* @_ssdm_op_SpecLatency(i32 1, i32 65535, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(float* %data_hw, [8 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(float* %dists_hw, [8 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  br label %1

; <label>:1                                       ; preds = %5, %0
  %i = phi i11 [ 0, %0 ], [ %i_2, %5 ]
  %tmp_4 = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %i, i5 0)
  %tmp_5_cast = zext i16 %tmp_4 to i17
  %exitcond5 = icmp eq i11 %i, -1024
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind
  %i_2 = add i11 %i, 1
  br i1 %exitcond5, label %.preheader7.preheader, label %2

.preheader7.preheader:                            ; preds = %1
  br label %.preheader7

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([17 x i8]* @p_str2) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([17 x i8]* @p_str2) nounwind
  br label %3

; <label>:3                                       ; preds = %4, %2
  %j = phi i6 [ 0, %2 ], [ %j_1, %4 ]
  %j_cast5_cast = zext i6 %j to i17
  %tmp_8 = add i17 %tmp_5_cast, %j_cast5_cast
  %tmp_8_cast = zext i17 %tmp_8 to i32
  %data_hw_tmp_addr_1 = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %tmp_8_cast
  %exitcond4 = icmp eq i6 %j, -32
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %j_1 = add i6 %j, 1
  br i1 %exitcond4, label %5, label %4

; <label>:4                                       ; preds = %3
  %data_hw_read = call float @_ssdm_op_Read.ap_fifo.floatP(float* %data_hw) nounwind
  store float %data_hw_read, float* %data_hw_tmp_addr_1, align 4
  br label %3

; <label>:5                                       ; preds = %3
  %empty_5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([17 x i8]* @p_str2, i32 %tmp_1) nounwind
  br label %1

.preheader7:                                      ; preds = %.preheader7.preheader, %6
  %i1 = phi i6 [ %i_1, %6 ], [ 0, %.preheader7.preheader ]
  %i1_cast4 = zext i6 %i1 to i32
  %data_hw_tmp_addr = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %i1_cast4
  %exitcond3 = icmp eq i6 %i1, -32
  %empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %i_1 = add i6 %i1, 1
  br i1 %exitcond3, label %.preheader6.preheader, label %6

.preheader6.preheader:                            ; preds = %.preheader7
  br label %.preheader6

; <label>:6                                       ; preds = %.preheader7
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @p_str3) nounwind
  %data_hw_tmp_load = load float* %data_hw_tmp_addr, align 4
  %movie_tmp_addr = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %i1_cast4
  store float %data_hw_tmp_load, float* %movie_tmp_addr, align 4
  br label %.preheader7

.preheader6:                                      ; preds = %.preheader6.preheader, %10
  %i2 = phi i11 [ %i_4, %10 ], [ 0, %.preheader6.preheader ]
  %i2_cast3 = zext i11 %i2 to i32
  %tmp_s = call i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11 %i2, i5 0)
  %tmp_11_cast = zext i16 %tmp_s to i17
  %exitcond2 = icmp eq i11 %i2, -1024
  %empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind
  %i_4 = add i11 %i2, 1
  br i1 %exitcond2, label %.preheader.preheader, label %7

.preheader.preheader:                             ; preds = %.preheader6
  br label %.preheader

; <label>:7                                       ; preds = %.preheader6
  call void (...)* @_ssdm_op_SpecLoopName([14 x i8]* @p_str4) nounwind
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([14 x i8]* @p_str4) nounwind
  br label %8

; <label>:8                                       ; preds = %9, %7
  %sum = phi float [ 0.000000e+00, %7 ], [ %sum_1, %9 ]
  %j3 = phi i6 [ 0, %7 ], [ %j_2, %9 ]
  %j3_cast2 = zext i6 %j3 to i32
  %j3_cast2_cast = zext i6 %j3 to i17
  %tmp_3 = add i17 %tmp_11_cast, %j3_cast2_cast
  %tmp_12_cast = zext i17 %tmp_3 to i32
  %data_hw_tmp_addr_2 = getelementptr [32768 x float]* %data_hw_tmp, i32 0, i32 %tmp_12_cast
  %exitcond1 = icmp eq i6 %j3, -32
  %empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
  %j_2 = add i6 %j3, 1
  br i1 %exitcond1, label %10, label %9

; <label>:9                                       ; preds = %8
  %data_hw_tmp_load_1 = load float* %data_hw_tmp_addr_2, align 4
  %movie_tmp_addr_1 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %j3_cast2
  %movie_tmp_load = load float* %movie_tmp_addr_1, align 4
  %diff = fsub float %data_hw_tmp_load_1, %movie_tmp_load
  %tmp_9 = fmul float %diff, %diff
  %sum_1 = fadd float %sum, %tmp_9
  br label %8

; <label>:10                                      ; preds = %8
  %tmp_6 = call float @llvm.sqrt.f32(float %sum)
  %dists_hw_tmp_addr_1 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i2_cast3
  store float %tmp_6, float* %dists_hw_tmp_addr_1, align 4
  %empty_9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([14 x i8]* @p_str4, i32 %tmp_2) nounwind
  br label %.preheader6

.preheader:                                       ; preds = %.preheader.preheader, %11
  %i4 = phi i11 [ %i_3, %11 ], [ 0, %.preheader.preheader ]
  %i4_cast1 = zext i11 %i4 to i32
  %exitcond = icmp eq i11 %i4, -1024
  %empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind
  %i_3 = add i11 %i4, 1
  br i1 %exitcond, label %12, label %11

; <label>:11                                      ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @p_str5) nounwind
  %dists_hw_tmp_addr = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i4_cast1
  %dists_hw_tmp_load = load float* %dists_hw_tmp_addr, align 4
  call void @_ssdm_op_Write.ap_fifo.floatP(float* %dists_hw, float %dists_hw_tmp_load) nounwind
  br label %.preheader

; <label>:12                                      ; preds = %.preheader
  ret void
}

define weak void @_ssdm_op_Write.ap_fifo.floatP(float*, float) {
entry:
  %empty = call float @_autotb_FifoWrite_float(float* %0, float %1)
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecLatency(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak float @_ssdm_op_Read.ap_fifo.floatP(float*) {
entry:
  %empty = call float @_autotb_FifoRead_float(float* %0)
  ret float %empty
}

define weak i16 @_ssdm_op_BitConcatenate.i16.i11.i5(i11, i5) nounwind readnone {
entry:
  %empty = zext i11 %0 to i16
  %empty_11 = zext i5 %1 to i16
  %empty_12 = shl i16 %empty, 5
  %empty_13 = or i16 %empty_12, %empty_11
  ret i16 %empty_13
}

declare float @_autotb_FifoWrite_float(float*, float)

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
