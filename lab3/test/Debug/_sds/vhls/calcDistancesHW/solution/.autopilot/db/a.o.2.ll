; ModuleID = '/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@calcDistancesHW.str = internal unnamed_addr constant [16 x i8] c"calcDistancesHW\00" ; [#uses=1 type=[16 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"WRITE_DISTS\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str4 = private unnamed_addr constant [14 x i8] c"COMPUTE_DISTS\00", align 1 ; [#uses=3 type=[14 x i8]*]
@.str3 = private unnamed_addr constant [15 x i8] c"LOAD_MOVIE_TMP\00", align 1 ; [#uses=1 type=[15 x i8]*]
@.str2 = private unnamed_addr constant [17 x i8] c"LOAD_DATA_HW_TMP\00", align 1 ; [#uses=3 type=[17 x i8]*]
@.str1 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1 ; [#uses=2 type=[8 x i8]*]
@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=13 type=[1 x i8]*]

; [#uses=1]
declare float @llvm.sqrt.f32(float) nounwind readonly

; [#uses=10]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=0]
define void @calcDistancesHW(float* %data_hw, float* %dists_hw) nounwind {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data_hw) nounwind, !map !25
  call void (...)* @_ssdm_op_SpecBitsMap(float* %dists_hw) nounwind, !map !31
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @calcDistancesHW.str) nounwind
  %data_hw_tmp = alloca [1024 x [32 x float]], align 4 ; [#uses=3 type=[1024 x [32 x float]]*]
  %movie_tmp = alloca [32 x float], align 4       ; [#uses=2 type=[32 x float]*]
  %dists_hw_tmp = alloca [1024 x float], align 4  ; [#uses=2 type=[1024 x float]*]
  call void @llvm.dbg.value(metadata !{float* %data_hw}, i64 0, metadata !35), !dbg !36 ; [debug line = 5:29] [debug variable = data_hw]
  call void @llvm.dbg.value(metadata !{float* %dists_hw}, i64 0, metadata !37), !dbg !38 ; [debug line = 5:45] [debug variable = dists_hw]
  call void (...)* @_ssdm_op_SpecLatency(i32 1, i32 65535, [1 x i8]* @.str) nounwind, !dbg !39 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %data_hw, [8 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str) nounwind, !dbg !39 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %dists_hw, [8 x i8]* @.str1, i32 0, i32 0, [1 x i8]* @.str, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str) nounwind, !dbg !39 ; [debug line = 7:1]
  call void @llvm.dbg.declare(metadata !{[1024 x [32 x float]]* %data_hw_tmp}, metadata !41), !dbg !46 ; [debug line = 7:8] [debug variable = data_hw_tmp]
  call void @llvm.dbg.declare(metadata !{[32 x float]* %movie_tmp}, metadata !47), !dbg !50 ; [debug line = 8:8] [debug variable = movie_tmp]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %dists_hw_tmp}, metadata !51), !dbg !54 ; [debug line = 9:8] [debug variable = dists_hw_tmp]
  br label %1, !dbg !55                           ; [debug line = 12:16]

; <label>:1                                       ; preds = %7, %0
  %i = phi i11 [ 0, %0 ], [ %i.2, %7 ]            ; [#uses=4 type=i11]
  %i.cast8 = zext i11 %i to i32, !dbg !55         ; [#uses=1 type=i32] [debug line = 12:16]
  %i.cast7 = zext i11 %i to i15, !dbg !55         ; [#uses=1 type=i15] [debug line = 12:16]
  %exitcond5 = icmp eq i11 %i, -1024, !dbg !55    ; [#uses=1 type=i1] [debug line = 12:16]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond5, label %.preheader7.preheader, label %3, !dbg !55 ; [debug line = 12:16]

.preheader7.preheader:                            ; preds = %1
  br label %.preheader7, !dbg !57                 ; [debug line = 19:16]

; <label>:3                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([17 x i8]* @.str2) nounwind, !dbg !59 ; [debug line = 12:34]
  %tmp.1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([17 x i8]* @.str2) nounwind, !dbg !59 ; [#uses=1 type=i32] [debug line = 12:34]
  %tmp = shl i15 %i.cast7, 5, !dbg !61            ; [#uses=1 type=i15] [debug line = 14:4]
  br label %4, !dbg !64                           ; [debug line = 13:17]

; <label>:4                                       ; preds = %6, %3
  %j = phi i6 [ 0, %3 ], [ %j.1, %6 ]             ; [#uses=4 type=i6]
  %j.cast6 = zext i6 %j to i15, !dbg !64          ; [#uses=1 type=i15] [debug line = 13:17]
  %j.cast5 = zext i6 %j to i32, !dbg !64          ; [#uses=1 type=i32] [debug line = 13:17]
  %exitcond4 = icmp eq i6 %j, -32, !dbg !64       ; [#uses=1 type=i1] [debug line = 13:17]
  %5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond4, label %7, label %6, !dbg !64  ; [debug line = 13:17]

; <label>:6                                       ; preds = %4
  %tmp.3 = add i15 %tmp, %j.cast6, !dbg !61       ; [#uses=1 type=i15] [debug line = 14:4]
  %tmp.3.cast = zext i15 %tmp.3 to i32, !dbg !61  ; [#uses=1 type=i32] [debug line = 14:4]
  %data_hw.addr = getelementptr inbounds float* %data_hw, i32 %tmp.3.cast, !dbg !61 ; [#uses=1 type=float*] [debug line = 14:4]
  %data_hw.load = load float* %data_hw.addr, align 4, !dbg !61 ; [#uses=1 type=float] [debug line = 14:4]
  %data_hw_tmp.addr.1 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %i.cast8, i32 %j.cast5, !dbg !61 ; [#uses=1 type=float*] [debug line = 14:4]
  store float %data_hw.load, float* %data_hw_tmp.addr.1, align 4, !dbg !61 ; [debug line = 14:4]
  %j.1 = add i6 %j, 1, !dbg !65                   ; [#uses=1 type=i6] [debug line = 13:27]
  call void @llvm.dbg.value(metadata !{i6 %j.1}, i64 0, metadata !66), !dbg !65 ; [debug line = 13:27] [debug variable = j]
  br label %4, !dbg !65                           ; [debug line = 13:27]

; <label>:7                                       ; preds = %4
  %8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([17 x i8]* @.str2, i32 %tmp.1) nounwind, !dbg !67 ; [#uses=0 type=i32] [debug line = 16:2]
  %i.2 = add i11 %i, 1, !dbg !68                  ; [#uses=1 type=i11] [debug line = 12:28]
  call void @llvm.dbg.value(metadata !{i11 %i.2}, i64 0, metadata !69), !dbg !68 ; [debug line = 12:28] [debug variable = i]
  br label %1, !dbg !68                           ; [debug line = 12:28]

.preheader7:                                      ; preds = %10, %.preheader7.preheader
  %i1 = phi i6 [ %i.1, %10 ], [ 0, %.preheader7.preheader ] ; [#uses=3 type=i6]
  %i1.cast4 = zext i6 %i1 to i32, !dbg !57        ; [#uses=2 type=i32] [debug line = 19:16]
  %exitcond3 = icmp eq i6 %i1, -32, !dbg !57      ; [#uses=1 type=i1] [debug line = 19:16]
  %9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond3, label %.preheader6.preheader, label %10, !dbg !57 ; [debug line = 19:16]

.preheader6.preheader:                            ; preds = %.preheader7
  br label %.preheader6, !dbg !70                 ; [debug line = 24:16]

; <label>:10                                      ; preds = %.preheader7
  call void (...)* @_ssdm_op_SpecLoopName([15 x i8]* @.str3) nounwind, !dbg !72 ; [debug line = 19:31]
  %data_hw_tmp.addr = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 0, i32 %i1.cast4, !dbg !74 ; [#uses=1 type=float*] [debug line = 20:3]
  %data_hw_tmp.load = load float* %data_hw_tmp.addr, align 4, !dbg !74 ; [#uses=1 type=float] [debug line = 20:3]
  %movie_tmp.addr = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %i1.cast4, !dbg !74 ; [#uses=1 type=float*] [debug line = 20:3]
  store float %data_hw_tmp.load, float* %movie_tmp.addr, align 4, !dbg !74 ; [debug line = 20:3]
  %i.1 = add i6 %i1, 1, !dbg !75                  ; [#uses=1 type=i6] [debug line = 19:26]
  call void @llvm.dbg.value(metadata !{i6 %i.1}, i64 0, metadata !76), !dbg !75 ; [debug line = 19:26] [debug variable = i]
  br label %.preheader7, !dbg !75                 ; [debug line = 19:26]

.preheader6:                                      ; preds = %16, %.preheader6.preheader
  %i2 = phi i11 [ %i.4, %16 ], [ 0, %.preheader6.preheader ] ; [#uses=3 type=i11]
  %i2.cast3 = zext i11 %i2 to i32, !dbg !70       ; [#uses=2 type=i32] [debug line = 24:16]
  %exitcond2 = icmp eq i11 %i2, -1024, !dbg !70   ; [#uses=1 type=i1] [debug line = 24:16]
  %11 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond2, label %.preheader.preheader, label %12, !dbg !70 ; [debug line = 24:16]

.preheader.preheader:                             ; preds = %.preheader6
  br label %.preheader, !dbg !77                  ; [debug line = 34:16]

; <label>:12                                      ; preds = %.preheader6
  call void (...)* @_ssdm_op_SpecLoopName([14 x i8]* @.str4) nounwind, !dbg !79 ; [debug line = 24:34]
  %tmp.2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([14 x i8]* @.str4) nounwind, !dbg !79 ; [#uses=1 type=i32] [debug line = 24:34]
  br label %13, !dbg !81                          ; [debug line = 26:17]

; <label>:13                                      ; preds = %15, %12
  %sum = phi float [ 0.000000e+00, %12 ], [ %sum.1, %15 ] ; [#uses=2 type=float]
  %j3 = phi i6 [ 0, %12 ], [ %j.2, %15 ]          ; [#uses=3 type=i6]
  %j3.cast2 = zext i6 %j3 to i32, !dbg !81        ; [#uses=2 type=i32] [debug line = 26:17]
  %exitcond1 = icmp eq i6 %j3, -32, !dbg !81      ; [#uses=1 type=i1] [debug line = 26:17]
  %14 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond1, label %16, label %15, !dbg !81 ; [debug line = 26:17]

; <label>:15                                      ; preds = %13
  %data_hw_tmp.addr.2 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %i2.cast3, i32 %j3.cast2, !dbg !83 ; [#uses=1 type=float*] [debug line = 27:4]
  %data_hw_tmp.load.1 = load float* %data_hw_tmp.addr.2, align 4, !dbg !83 ; [#uses=1 type=float] [debug line = 27:4]
  %movie_tmp.addr.1 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %j3.cast2, !dbg !83 ; [#uses=1 type=float*] [debug line = 27:4]
  %movie_tmp.load = load float* %movie_tmp.addr.1, align 4, !dbg !83 ; [#uses=1 type=float] [debug line = 27:4]
  %diff = fsub float %data_hw_tmp.load.1, %movie_tmp.load, !dbg !83 ; [#uses=2 type=float] [debug line = 27:4]
  call void @llvm.dbg.value(metadata !{float %diff}, i64 0, metadata !85), !dbg !83 ; [debug line = 27:4] [debug variable = diff]
  %tmp.9 = fmul float %diff, %diff, !dbg !86      ; [#uses=1 type=float] [debug line = 28:4]
  %sum.1 = fadd float %sum, %tmp.9, !dbg !86      ; [#uses=1 type=float] [debug line = 28:4]
  call void @llvm.dbg.value(metadata !{float %sum.1}, i64 0, metadata !87), !dbg !86 ; [debug line = 28:4] [debug variable = sum]
  %j.2 = add i6 %j3, 1, !dbg !88                  ; [#uses=1 type=i6] [debug line = 26:27]
  call void @llvm.dbg.value(metadata !{i6 %j.2}, i64 0, metadata !89), !dbg !88 ; [debug line = 26:27] [debug variable = j]
  br label %13, !dbg !88                          ; [debug line = 26:27]

; <label>:16                                      ; preds = %13
  %sum.lcssa = phi float [ %sum, %13 ]            ; [#uses=1 type=float]
  %tmp.6 = call float @llvm.sqrt.f32(float %sum.lcssa), !dbg !90 ; [#uses=1 type=float] [debug line = 30:21]
  %dists_hw_tmp.addr.1 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i2.cast3, !dbg !90 ; [#uses=1 type=float*] [debug line = 30:21]
  store float %tmp.6, float* %dists_hw_tmp.addr.1, align 4, !dbg !90 ; [debug line = 30:21]
  %17 = call i32 (...)* @_ssdm_op_SpecRegionEnd([14 x i8]* @.str4, i32 %tmp.2) nounwind, !dbg !91 ; [#uses=0 type=i32] [debug line = 31:2]
  %i.4 = add i11 %i2, 1, !dbg !92                 ; [#uses=1 type=i11] [debug line = 24:28]
  call void @llvm.dbg.value(metadata !{i11 %i.4}, i64 0, metadata !93), !dbg !92 ; [debug line = 24:28] [debug variable = i]
  br label %.preheader6, !dbg !92                 ; [debug line = 24:28]

.preheader:                                       ; preds = %19, %.preheader.preheader
  %i4 = phi i11 [ %i.3, %19 ], [ 0, %.preheader.preheader ] ; [#uses=3 type=i11]
  %i4.cast1 = zext i11 %i4 to i32, !dbg !77       ; [#uses=2 type=i32] [debug line = 34:16]
  %exitcond = icmp eq i11 %i4, -1024, !dbg !77    ; [#uses=1 type=i1] [debug line = 34:16]
  %18 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 1024, i64 1024, i64 1024) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %20, label %19, !dbg !77 ; [debug line = 34:16]

; <label>:19                                      ; preds = %.preheader
  call void (...)* @_ssdm_op_SpecLoopName([12 x i8]* @.str5) nounwind, !dbg !94 ; [debug line = 34:34]
  %dists_hw_tmp.addr = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %i4.cast1, !dbg !96 ; [#uses=1 type=float*] [debug line = 35:3]
  %dists_hw_tmp.load = load float* %dists_hw_tmp.addr, align 4, !dbg !96 ; [#uses=1 type=float] [debug line = 35:3]
  %dists_hw.addr = getelementptr inbounds float* %dists_hw, i32 %i4.cast1, !dbg !96 ; [#uses=1 type=float*] [debug line = 35:3]
  store float %dists_hw_tmp.load, float* %dists_hw.addr, align 4, !dbg !96 ; [debug line = 35:3]
  %i.3 = add i11 %i4, 1, !dbg !97                 ; [#uses=1 type=i11] [debug line = 34:28]
  call void @llvm.dbg.value(metadata !{i11 %i.3}, i64 0, metadata !98), !dbg !97 ; [debug line = 34:28] [debug variable = i]
  br label %.preheader, !dbg !97                  ; [debug line = 34:28]

; <label>:20                                      ; preds = %.preheader
  ret void, !dbg !99                              ; [debug line = 37:1]
}

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=2]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=2]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=6]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecLatency(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

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
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 31, metadata !27}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !"data_hw", metadata !29, metadata !"float", i32 0, i32 31}
!29 = metadata !{metadata !30}
!30 = metadata !{i32 0, i32 0, i32 1}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 31, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"dists_hw", metadata !29, metadata !"float", i32 0, i32 31}
!35 = metadata !{i32 786689, metadata !5, metadata !"data_hw", metadata !6, i32 16777221, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!36 = metadata !{i32 5, i32 29, metadata !5, null}
!37 = metadata !{i32 786689, metadata !5, metadata !"dists_hw", metadata !6, i32 33554437, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!38 = metadata !{i32 5, i32 45, metadata !5, null}
!39 = metadata !{i32 7, i32 1, metadata !40, null}
!40 = metadata !{i32 786443, metadata !5, i32 6, i32 1, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 786688, metadata !40, metadata !"data_hw_tmp", metadata !6, i32 7, metadata !42, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1048576, i64 32, i32 0, i32 0, metadata !10, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !44, metadata !45}
!44 = metadata !{i32 786465, i64 0, i64 1023}     ; [ DW_TAG_subrange_type ]
!45 = metadata !{i32 786465, i64 0, i64 31}       ; [ DW_TAG_subrange_type ]
!46 = metadata !{i32 7, i32 8, metadata !40, null}
!47 = metadata !{i32 786688, metadata !40, metadata !"movie_tmp", metadata !6, i32 8, metadata !48, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!48 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1024, i64 32, i32 0, i32 0, metadata !10, metadata !49, i32 0, i32 0} ; [ DW_TAG_array_type ]
!49 = metadata !{metadata !45}
!50 = metadata !{i32 8, i32 8, metadata !40, null}
!51 = metadata !{i32 786688, metadata !40, metadata !"dists_hw_tmp", metadata !6, i32 9, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32768, i64 32, i32 0, i32 0, metadata !10, metadata !53, i32 0, i32 0} ; [ DW_TAG_array_type ]
!53 = metadata !{metadata !44}
!54 = metadata !{i32 9, i32 8, metadata !40, null}
!55 = metadata !{i32 12, i32 16, metadata !56, null}
!56 = metadata !{i32 786443, metadata !40, i32 12, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 19, i32 16, metadata !58, null}
!58 = metadata !{i32 786443, metadata !40, i32 19, i32 2, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!59 = metadata !{i32 12, i32 34, metadata !60, null}
!60 = metadata !{i32 786443, metadata !56, i32 12, i32 33, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!61 = metadata !{i32 14, i32 4, metadata !62, null}
!62 = metadata !{i32 786443, metadata !63, i32 13, i32 32, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!63 = metadata !{i32 786443, metadata !60, i32 13, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 13, i32 17, metadata !63, null}
!65 = metadata !{i32 13, i32 27, metadata !63, null}
!66 = metadata !{i32 786688, metadata !63, metadata !"j", metadata !6, i32 13, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!67 = metadata !{i32 16, i32 2, metadata !60, null}
!68 = metadata !{i32 12, i32 28, metadata !56, null}
!69 = metadata !{i32 786688, metadata !56, metadata !"i", metadata !6, i32 12, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!70 = metadata !{i32 24, i32 16, metadata !71, null}
!71 = metadata !{i32 786443, metadata !40, i32 24, i32 2, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!72 = metadata !{i32 19, i32 31, metadata !73, null}
!73 = metadata !{i32 786443, metadata !58, i32 19, i32 30, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!74 = metadata !{i32 20, i32 3, metadata !73, null}
!75 = metadata !{i32 19, i32 26, metadata !58, null}
!76 = metadata !{i32 786688, metadata !58, metadata !"i", metadata !6, i32 19, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!77 = metadata !{i32 34, i32 16, metadata !78, null}
!78 = metadata !{i32 786443, metadata !40, i32 34, i32 2, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 24, i32 34, metadata !80, null}
!80 = metadata !{i32 786443, metadata !71, i32 24, i32 33, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 26, i32 17, metadata !82, null}
!82 = metadata !{i32 786443, metadata !80, i32 26, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!83 = metadata !{i32 27, i32 4, metadata !84, null}
!84 = metadata !{i32 786443, metadata !82, i32 26, i32 31, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 786688, metadata !80, metadata !"diff", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!86 = metadata !{i32 28, i32 4, metadata !84, null}
!87 = metadata !{i32 786688, metadata !80, metadata !"sum", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!88 = metadata !{i32 26, i32 27, metadata !82, null}
!89 = metadata !{i32 786688, metadata !82, metadata !"j", metadata !6, i32 26, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!90 = metadata !{i32 30, i32 21, metadata !80, null}
!91 = metadata !{i32 31, i32 2, metadata !80, null}
!92 = metadata !{i32 24, i32 28, metadata !71, null}
!93 = metadata !{i32 786688, metadata !71, metadata !"i", metadata !6, i32 24, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 34, i32 34, metadata !95, null}
!95 = metadata !{i32 786443, metadata !78, i32 34, i32 33, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!96 = metadata !{i32 35, i32 3, metadata !95, null}
!97 = metadata !{i32 34, i32 28, metadata !78, null}
!98 = metadata !{i32 786688, metadata !78, metadata !"i", metadata !6, i32 34, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!99 = metadata !{i32 37, i32 1, metadata !40, null}
