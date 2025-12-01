; ModuleID = '/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/a.g.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:32:64-f32:32:32-f64:32:64-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str1 = private unnamed_addr constant [8 x i8] c"ap_fifo\00", align 1 ; [#uses=1 type=[8 x i8]*]
@.str2 = private unnamed_addr constant [17 x i8] c"LOAD_DATA_HW_TMP\00", align 1 ; [#uses=1 type=[17 x i8]*]
@.str3 = private unnamed_addr constant [15 x i8] c"LOAD_MOVIE_TMP\00", align 1 ; [#uses=1 type=[15 x i8]*]
@.str4 = private unnamed_addr constant [14 x i8] c"COMPUTE_DISTS\00", align 1 ; [#uses=1 type=[14 x i8]*]
@.str5 = private unnamed_addr constant [12 x i8] c"WRITE_DISTS\00", align 1 ; [#uses=1 type=[12 x i8]*]
@signgam = external global i32                    ; [#uses=0 type=i32*]

; [#uses=0]
define void @_Z15calcDistancesHWPfS_(float* %data_hw, float* %dists_hw) nounwind {
  %1 = alloca float*, align 4                     ; [#uses=3 type=float**]
  %2 = alloca float*, align 4                     ; [#uses=3 type=float**]
  %data_hw_tmp = alloca [1024 x [32 x float]], align 4 ; [#uses=3 type=[1024 x [32 x float]]*]
  %movie_tmp = alloca [32 x float], align 4       ; [#uses=2 type=[32 x float]*]
  %dists_hw_tmp = alloca [1024 x float], align 4  ; [#uses=2 type=[1024 x float]*]
  %i = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %j = alloca i32, align 4                        ; [#uses=6 type=i32*]
  %i1 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %i2 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %sum = alloca float, align 4                    ; [#uses=4 type=float*]
  %diff = alloca float, align 4                   ; [#uses=4 type=float*]
  %j3 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  %i4 = alloca i32, align 4                       ; [#uses=6 type=i32*]
  store float* %data_hw, float** %1, align 4
  call void @llvm.dbg.declare(metadata !{float** %1}, metadata !25), !dbg !26 ; [debug line = 5:29] [debug variable = data_hw]
  store float* %dists_hw, float** %2, align 4
  call void @llvm.dbg.declare(metadata !{float** %2}, metadata !27), !dbg !28 ; [debug line = 5:45] [debug variable = dists_hw]
  call void (...)* @_ssdm_op_SpecLatency(i32 1, i32 65535, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  %3 = load float** %1, align 4, !dbg !29         ; [#uses=1 type=float*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %3, i8* getelementptr inbounds ([8 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  %4 = load float** %2, align 4, !dbg !29         ; [#uses=1 type=float*] [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(float* %4, i8* getelementptr inbounds ([8 x i8]* @.str1, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([1 x i8]* @.str, i32 0, i32 0)) nounwind, !dbg !29 ; [debug line = 7:1]
  call void @llvm.dbg.declare(metadata !{[1024 x [32 x float]]* %data_hw_tmp}, metadata !31), !dbg !36 ; [debug line = 7:8] [debug variable = data_hw_tmp]
  call void @llvm.dbg.declare(metadata !{[32 x float]* %movie_tmp}, metadata !37), !dbg !40 ; [debug line = 8:8] [debug variable = movie_tmp]
  call void @llvm.dbg.declare(metadata !{[1024 x float]* %dists_hw_tmp}, metadata !41), !dbg !44 ; [debug line = 9:8] [debug variable = dists_hw_tmp]
  br label %5, !dbg !45                           ; [debug line = 9:26]

; <label>:5                                       ; preds = %0
  call void @llvm.dbg.declare(metadata !{i32* %i}, metadata !46), !dbg !48 ; [debug line = 12:11] [debug variable = i]
  store i32 0, i32* %i, align 4, !dbg !49         ; [debug line = 12:16]
  br label %6, !dbg !49                           ; [debug line = 12:16]

; <label>:6                                       ; preds = %29, %5
  %7 = load i32* %i, align 4, !dbg !49            ; [#uses=1 type=i32] [debug line = 12:16]
  %8 = icmp slt i32 %7, 1024, !dbg !49            ; [#uses=1 type=i1] [debug line = 12:16]
  br i1 %8, label %9, label %32, !dbg !49         ; [debug line = 12:16]

; <label>:9                                       ; preds = %6
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !50 ; [debug line = 12:34]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !50 ; [debug line = 12:34]
  call void @llvm.dbg.declare(metadata !{i32* %j}, metadata !52), !dbg !54 ; [debug line = 13:12] [debug variable = j]
  store i32 0, i32* %j, align 4, !dbg !55         ; [debug line = 13:17]
  br label %10, !dbg !55                          ; [debug line = 13:17]

; <label>:10                                      ; preds = %25, %9
  %11 = load i32* %j, align 4, !dbg !55           ; [#uses=1 type=i32] [debug line = 13:17]
  %12 = icmp slt i32 %11, 32, !dbg !55            ; [#uses=1 type=i1] [debug line = 13:17]
  br i1 %12, label %13, label %28, !dbg !55       ; [debug line = 13:17]

; <label>:13                                      ; preds = %10
  %14 = load i32* %i, align 4, !dbg !56           ; [#uses=1 type=i32] [debug line = 14:4]
  %15 = mul nsw i32 %14, 32, !dbg !56             ; [#uses=1 type=i32] [debug line = 14:4]
  %16 = load i32* %j, align 4, !dbg !56           ; [#uses=1 type=i32] [debug line = 14:4]
  %17 = add nsw i32 %15, %16, !dbg !56            ; [#uses=1 type=i32] [debug line = 14:4]
  %18 = load float** %1, align 4, !dbg !56        ; [#uses=1 type=float*] [debug line = 14:4]
  %19 = getelementptr inbounds float* %18, i32 %17, !dbg !56 ; [#uses=1 type=float*] [debug line = 14:4]
  %20 = load float* %19, align 4, !dbg !56        ; [#uses=1 type=float] [debug line = 14:4]
  %21 = load i32* %j, align 4, !dbg !56           ; [#uses=1 type=i32] [debug line = 14:4]
  %22 = load i32* %i, align 4, !dbg !56           ; [#uses=1 type=i32] [debug line = 14:4]
  %23 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %22, !dbg !56 ; [#uses=1 type=[32 x float]*] [debug line = 14:4]
  %24 = getelementptr inbounds [32 x float]* %23, i32 0, i32 %21, !dbg !56 ; [#uses=1 type=float*] [debug line = 14:4]
  store float %20, float* %24, align 4, !dbg !56  ; [debug line = 14:4]
  br label %25, !dbg !58                          ; [debug line = 15:3]

; <label>:25                                      ; preds = %13
  %26 = load i32* %j, align 4, !dbg !59           ; [#uses=1 type=i32] [debug line = 13:27]
  %27 = add nsw i32 %26, 1, !dbg !59              ; [#uses=1 type=i32] [debug line = 13:27]
  store i32 %27, i32* %j, align 4, !dbg !59       ; [debug line = 13:27]
  br label %10, !dbg !59                          ; [debug line = 13:27]

; <label>:28                                      ; preds = %10
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([17 x i8]* @.str2, i32 0, i32 0)) nounwind, !dbg !60 ; [debug line = 16:2]
  br label %29, !dbg !60                          ; [debug line = 16:2]

; <label>:29                                      ; preds = %28
  %30 = load i32* %i, align 4, !dbg !61           ; [#uses=1 type=i32] [debug line = 12:28]
  %31 = add nsw i32 %30, 1, !dbg !61              ; [#uses=1 type=i32] [debug line = 12:28]
  store i32 %31, i32* %i, align 4, !dbg !61       ; [debug line = 12:28]
  br label %6, !dbg !61                           ; [debug line = 12:28]

; <label>:32                                      ; preds = %6
  br label %33, !dbg !62                          ; [debug line = 16:2]

; <label>:33                                      ; preds = %32
  call void @llvm.dbg.declare(metadata !{i32* %i1}, metadata !63), !dbg !65 ; [debug line = 19:11] [debug variable = i]
  store i32 0, i32* %i1, align 4, !dbg !66        ; [debug line = 19:16]
  br label %34, !dbg !66                          ; [debug line = 19:16]

; <label>:34                                      ; preds = %44, %33
  %35 = load i32* %i1, align 4, !dbg !66          ; [#uses=1 type=i32] [debug line = 19:16]
  %36 = icmp slt i32 %35, 32, !dbg !66            ; [#uses=1 type=i1] [debug line = 19:16]
  br i1 %36, label %37, label %47, !dbg !66       ; [debug line = 19:16]

; <label>:37                                      ; preds = %34
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !67 ; [debug line = 19:31]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !67 ; [debug line = 19:31]
  %38 = load i32* %i1, align 4, !dbg !69          ; [#uses=1 type=i32] [debug line = 20:3]
  %39 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 0, !dbg !69 ; [#uses=1 type=[32 x float]*] [debug line = 20:3]
  %40 = getelementptr inbounds [32 x float]* %39, i32 0, i32 %38, !dbg !69 ; [#uses=1 type=float*] [debug line = 20:3]
  %41 = load float* %40, align 4, !dbg !69        ; [#uses=1 type=float] [debug line = 20:3]
  %42 = load i32* %i1, align 4, !dbg !69          ; [#uses=1 type=i32] [debug line = 20:3]
  %43 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %42, !dbg !69 ; [#uses=1 type=float*] [debug line = 20:3]
  store float %41, float* %43, align 4, !dbg !69  ; [debug line = 20:3]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([15 x i8]* @.str3, i32 0, i32 0)) nounwind, !dbg !70 ; [debug line = 21:2]
  br label %44, !dbg !70                          ; [debug line = 21:2]

; <label>:44                                      ; preds = %37
  %45 = load i32* %i1, align 4, !dbg !71          ; [#uses=1 type=i32] [debug line = 19:26]
  %46 = add nsw i32 %45, 1, !dbg !71              ; [#uses=1 type=i32] [debug line = 19:26]
  store i32 %46, i32* %i1, align 4, !dbg !71      ; [debug line = 19:26]
  br label %34, !dbg !71                          ; [debug line = 19:26]

; <label>:47                                      ; preds = %34
  br label %48, !dbg !72                          ; [debug line = 21:2]

; <label>:48                                      ; preds = %47
  call void @llvm.dbg.declare(metadata !{i32* %i2}, metadata !73), !dbg !75 ; [debug line = 24:11] [debug variable = i]
  store i32 0, i32* %i2, align 4, !dbg !76        ; [debug line = 24:16]
  br label %49, !dbg !76                          ; [debug line = 24:16]

; <label>:49                                      ; preds = %81, %48
  %50 = load i32* %i2, align 4, !dbg !76          ; [#uses=1 type=i32] [debug line = 24:16]
  %51 = icmp slt i32 %50, 1024, !dbg !76          ; [#uses=1 type=i1] [debug line = 24:16]
  br i1 %51, label %52, label %84, !dbg !76       ; [debug line = 24:16]

; <label>:52                                      ; preds = %49
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !77 ; [debug line = 24:34]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !77 ; [debug line = 24:34]
  call void @llvm.dbg.declare(metadata !{float* %sum}, metadata !79), !dbg !80 ; [debug line = 25:9] [debug variable = sum]
  store float 0.000000e+00, float* %sum, align 4, !dbg !81 ; [debug line = 25:30]
  call void @llvm.dbg.declare(metadata !{float* %diff}, metadata !82), !dbg !83 ; [debug line = 25:20] [debug variable = diff]
  store float 0.000000e+00, float* %diff, align 4, !dbg !81 ; [debug line = 25:30]
  call void @llvm.dbg.declare(metadata !{i32* %j3}, metadata !84), !dbg !86 ; [debug line = 26:12] [debug variable = j]
  store i32 0, i32* %j3, align 4, !dbg !87        ; [debug line = 26:17]
  br label %53, !dbg !87                          ; [debug line = 26:17]

; <label>:53                                      ; preds = %71, %52
  %54 = load i32* %j3, align 4, !dbg !87          ; [#uses=1 type=i32] [debug line = 26:17]
  %55 = icmp slt i32 %54, 32, !dbg !87            ; [#uses=1 type=i1] [debug line = 26:17]
  br i1 %55, label %56, label %74, !dbg !87       ; [debug line = 26:17]

; <label>:56                                      ; preds = %53
  %57 = load i32* %j3, align 4, !dbg !88          ; [#uses=1 type=i32] [debug line = 27:4]
  %58 = load i32* %i2, align 4, !dbg !88          ; [#uses=1 type=i32] [debug line = 27:4]
  %59 = getelementptr inbounds [1024 x [32 x float]]* %data_hw_tmp, i32 0, i32 %58, !dbg !88 ; [#uses=1 type=[32 x float]*] [debug line = 27:4]
  %60 = getelementptr inbounds [32 x float]* %59, i32 0, i32 %57, !dbg !88 ; [#uses=1 type=float*] [debug line = 27:4]
  %61 = load float* %60, align 4, !dbg !88        ; [#uses=1 type=float] [debug line = 27:4]
  %62 = load i32* %j3, align 4, !dbg !88          ; [#uses=1 type=i32] [debug line = 27:4]
  %63 = getelementptr inbounds [32 x float]* %movie_tmp, i32 0, i32 %62, !dbg !88 ; [#uses=1 type=float*] [debug line = 27:4]
  %64 = load float* %63, align 4, !dbg !88        ; [#uses=1 type=float] [debug line = 27:4]
  %65 = fsub float %61, %64, !dbg !88             ; [#uses=1 type=float] [debug line = 27:4]
  store float %65, float* %diff, align 4, !dbg !88 ; [debug line = 27:4]
  %66 = load float* %diff, align 4, !dbg !90      ; [#uses=1 type=float] [debug line = 28:4]
  %67 = load float* %diff, align 4, !dbg !90      ; [#uses=1 type=float] [debug line = 28:4]
  %68 = fmul float %66, %67, !dbg !90             ; [#uses=1 type=float] [debug line = 28:4]
  %69 = load float* %sum, align 4, !dbg !90       ; [#uses=1 type=float] [debug line = 28:4]
  %70 = fadd float %69, %68, !dbg !90             ; [#uses=1 type=float] [debug line = 28:4]
  store float %70, float* %sum, align 4, !dbg !90 ; [debug line = 28:4]
  br label %71, !dbg !91                          ; [debug line = 29:3]

; <label>:71                                      ; preds = %56
  %72 = load i32* %j3, align 4, !dbg !92          ; [#uses=1 type=i32] [debug line = 26:27]
  %73 = add nsw i32 %72, 1, !dbg !92              ; [#uses=1 type=i32] [debug line = 26:27]
  store i32 %73, i32* %j3, align 4, !dbg !92      ; [debug line = 26:27]
  br label %53, !dbg !92                          ; [debug line = 26:27]

; <label>:74                                      ; preds = %53
  %75 = load float* %sum, align 4, !dbg !93       ; [#uses=1 type=float] [debug line = 30:21]
  %76 = fpext float %75 to double, !dbg !93       ; [#uses=1 type=double] [debug line = 30:21]
  %77 = call double @sqrt(double %76) nounwind readnone, !dbg !93 ; [#uses=1 type=double] [debug line = 30:21]
  %78 = fptrunc double %77 to float, !dbg !93     ; [#uses=1 type=float] [debug line = 30:21]
  %79 = load i32* %i2, align 4, !dbg !93          ; [#uses=1 type=i32] [debug line = 30:21]
  %80 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %79, !dbg !93 ; [#uses=1 type=float*] [debug line = 30:21]
  store float %78, float* %80, align 4, !dbg !93  ; [debug line = 30:21]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) nounwind, !dbg !94 ; [debug line = 31:2]
  br label %81, !dbg !94                          ; [debug line = 31:2]

; <label>:81                                      ; preds = %74
  %82 = load i32* %i2, align 4, !dbg !95          ; [#uses=1 type=i32] [debug line = 24:28]
  %83 = add nsw i32 %82, 1, !dbg !95              ; [#uses=1 type=i32] [debug line = 24:28]
  store i32 %83, i32* %i2, align 4, !dbg !95      ; [debug line = 24:28]
  br label %49, !dbg !95                          ; [debug line = 24:28]

; <label>:84                                      ; preds = %49
  br label %85, !dbg !96                          ; [debug line = 31:2]

; <label>:85                                      ; preds = %84
  call void @llvm.dbg.declare(metadata !{i32* %i4}, metadata !97), !dbg !99 ; [debug line = 34:11] [debug variable = i]
  store i32 0, i32* %i4, align 4, !dbg !100       ; [debug line = 34:16]
  br label %86, !dbg !100                         ; [debug line = 34:16]

; <label>:86                                      ; preds = %96, %85
  %87 = load i32* %i4, align 4, !dbg !100         ; [#uses=1 type=i32] [debug line = 34:16]
  %88 = icmp slt i32 %87, 1024, !dbg !100         ; [#uses=1 type=i1] [debug line = 34:16]
  br i1 %88, label %89, label %99, !dbg !100      ; [debug line = 34:16]

; <label>:89                                      ; preds = %86
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !101 ; [debug line = 34:34]
  call void (...)* @_ssdm_RegionBegin(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !101 ; [debug line = 34:34]
  %90 = load i32* %i4, align 4, !dbg !103         ; [#uses=1 type=i32] [debug line = 35:3]
  %91 = getelementptr inbounds [1024 x float]* %dists_hw_tmp, i32 0, i32 %90, !dbg !103 ; [#uses=1 type=float*] [debug line = 35:3]
  %92 = load float* %91, align 4, !dbg !103       ; [#uses=1 type=float] [debug line = 35:3]
  %93 = load i32* %i4, align 4, !dbg !103         ; [#uses=1 type=i32] [debug line = 35:3]
  %94 = load float** %2, align 4, !dbg !103       ; [#uses=1 type=float*] [debug line = 35:3]
  %95 = getelementptr inbounds float* %94, i32 %93, !dbg !103 ; [#uses=1 type=float*] [debug line = 35:3]
  store float %92, float* %95, align 4, !dbg !103 ; [debug line = 35:3]
  call void (...)* @_ssdm_RegionEnd(i8* getelementptr inbounds ([12 x i8]* @.str5, i32 0, i32 0)) nounwind, !dbg !104 ; [debug line = 36:2]
  br label %96, !dbg !104                         ; [debug line = 36:2]

; <label>:96                                      ; preds = %89
  %97 = load i32* %i4, align 4, !dbg !105         ; [#uses=1 type=i32] [debug line = 34:28]
  %98 = add nsw i32 %97, 1, !dbg !105             ; [#uses=1 type=i32] [debug line = 34:28]
  store i32 %98, i32* %i4, align 4, !dbg !105     ; [debug line = 34:28]
  br label %86, !dbg !105                         ; [debug line = 34:28]

; <label>:99                                      ; preds = %86
  ret void, !dbg !106                             ; [debug line = 37:1]
}

; [#uses=13]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecLatency(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=4]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=4]
declare void @_ssdm_RegionBegin(...) nounwind

; [#uses=4]
declare void @_ssdm_RegionEnd(...) nounwind

; [#uses=1]
declare double @sqrt(double) nounwind readnone

!llvm.dbg.cu = !{!0}
!opencl.kernels = !{!18}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls/calcDistancesHW/solution/.autopilot/db/calcDist.pragma.2.cpp", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !13} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"calcDistancesHW", metadata !"calcDistancesHW", metadata !"_Z15calcDistancesHWPfS_", metadata !6, i32 5, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @_Z15calcDistancesHWPfS_, null, null, metadata !11, i32 6} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"/home/sdsocuser/workspace/test/src/calcDist.cpp", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !9}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 32, i64 32, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!11 = metadata !{metadata !12}
!12 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!13 = metadata !{metadata !14}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 786484, i32 0, null, metadata !"signgam", metadata !"signgam", metadata !"", metadata !16, i32 489, metadata !17, i32 0, i32 1, i32* @signgam} ; [ DW_TAG_variable ]
!16 = metadata !{i32 786473, metadata !"/usr/include/math.h", metadata !"/home/sdsocuser/workspace/test/Debug/_sds/vhls", null} ; [ DW_TAG_file_type ]
!17 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!18 = metadata !{void (float*, float*)* @_Z15calcDistancesHWPfS_, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !24}
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
!45 = metadata !{i32 9, i32 26, metadata !30, null}
!46 = metadata !{i32 786688, metadata !47, metadata !"i", metadata !6, i32 12, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!47 = metadata !{i32 786443, metadata !30, i32 12, i32 2, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 12, i32 11, metadata !47, null}
!49 = metadata !{i32 12, i32 16, metadata !47, null}
!50 = metadata !{i32 12, i32 34, metadata !51, null}
!51 = metadata !{i32 786443, metadata !47, i32 12, i32 33, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!52 = metadata !{i32 786688, metadata !53, metadata !"j", metadata !6, i32 13, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!53 = metadata !{i32 786443, metadata !51, i32 13, i32 3, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!54 = metadata !{i32 13, i32 12, metadata !53, null}
!55 = metadata !{i32 13, i32 17, metadata !53, null}
!56 = metadata !{i32 14, i32 4, metadata !57, null}
!57 = metadata !{i32 786443, metadata !53, i32 13, i32 32, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!58 = metadata !{i32 15, i32 3, metadata !57, null}
!59 = metadata !{i32 13, i32 27, metadata !53, null}
!60 = metadata !{i32 16, i32 2, metadata !51, null}
!61 = metadata !{i32 12, i32 28, metadata !47, null}
!62 = metadata !{i32 16, i32 2, metadata !47, null}
!63 = metadata !{i32 786688, metadata !64, metadata !"i", metadata !6, i32 19, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!64 = metadata !{i32 786443, metadata !30, i32 19, i32 2, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 19, i32 11, metadata !64, null}
!66 = metadata !{i32 19, i32 16, metadata !64, null}
!67 = metadata !{i32 19, i32 31, metadata !68, null}
!68 = metadata !{i32 786443, metadata !64, i32 19, i32 30, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!69 = metadata !{i32 20, i32 3, metadata !68, null}
!70 = metadata !{i32 21, i32 2, metadata !68, null}
!71 = metadata !{i32 19, i32 26, metadata !64, null}
!72 = metadata !{i32 21, i32 2, metadata !64, null}
!73 = metadata !{i32 786688, metadata !74, metadata !"i", metadata !6, i32 24, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!74 = metadata !{i32 786443, metadata !30, i32 24, i32 2, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!75 = metadata !{i32 24, i32 11, metadata !74, null}
!76 = metadata !{i32 24, i32 16, metadata !74, null}
!77 = metadata !{i32 24, i32 34, metadata !78, null}
!78 = metadata !{i32 786443, metadata !74, i32 24, i32 33, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 786688, metadata !78, metadata !"sum", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!80 = metadata !{i32 25, i32 9, metadata !78, null}
!81 = metadata !{i32 25, i32 30, metadata !78, null}
!82 = metadata !{i32 786688, metadata !78, metadata !"diff", metadata !6, i32 25, metadata !10, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!83 = metadata !{i32 25, i32 20, metadata !78, null}
!84 = metadata !{i32 786688, metadata !85, metadata !"j", metadata !6, i32 26, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!85 = metadata !{i32 786443, metadata !78, i32 26, i32 3, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!86 = metadata !{i32 26, i32 12, metadata !85, null}
!87 = metadata !{i32 26, i32 17, metadata !85, null}
!88 = metadata !{i32 27, i32 4, metadata !89, null}
!89 = metadata !{i32 786443, metadata !85, i32 26, i32 31, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!90 = metadata !{i32 28, i32 4, metadata !89, null}
!91 = metadata !{i32 29, i32 3, metadata !89, null}
!92 = metadata !{i32 26, i32 27, metadata !85, null}
!93 = metadata !{i32 30, i32 21, metadata !78, null}
!94 = metadata !{i32 31, i32 2, metadata !78, null}
!95 = metadata !{i32 24, i32 28, metadata !74, null}
!96 = metadata !{i32 31, i32 2, metadata !74, null}
!97 = metadata !{i32 786688, metadata !98, metadata !"i", metadata !6, i32 34, metadata !17, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 786443, metadata !30, i32 34, i32 2, metadata !6, i32 11} ; [ DW_TAG_lexical_block ]
!99 = metadata !{i32 34, i32 11, metadata !98, null}
!100 = metadata !{i32 34, i32 16, metadata !98, null}
!101 = metadata !{i32 34, i32 34, metadata !102, null}
!102 = metadata !{i32 786443, metadata !98, i32 34, i32 33, metadata !6, i32 12} ; [ DW_TAG_lexical_block ]
!103 = metadata !{i32 35, i32 3, metadata !102, null}
!104 = metadata !{i32 36, i32 2, metadata !102, null}
!105 = metadata !{i32 34, i32 28, metadata !98, null}
!106 = metadata !{i32 37, i32 1, metadata !30, null}
