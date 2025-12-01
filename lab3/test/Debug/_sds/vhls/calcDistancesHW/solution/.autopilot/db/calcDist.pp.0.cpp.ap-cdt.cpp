#pragma line 1 "/home/sdsocuser/workspace/test/src/calcDist.cpp"
#pragma line 1 "/home/sdsocuser/workspace/test/src/calcDist.cpp" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 152 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx/SDx/2016.4/Vivado_HLS/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
 * __VIVADO_HLS_COPYRIGHT-INFO__ 
 *
 * $Id$
 */
#pragma line 99 "/opt/Xilinx/SDx/2016.4/Vivado_HLS/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
#pragma empty_line
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;
#pragma empty_line
    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return(...) __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));
#pragma empty_line
    void __xilinx_ip_top(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
}
#pragma line 361 "/opt/Xilinx/SDx/2016.4/Vivado_HLS/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 375 "/opt/Xilinx/SDx/2016.4/Vivado_HLS/common/technology/autopilot/etc/autopilot_ssdm_op.h"
// XSIP watermark, do not delete 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#pragma line 9 "<command line>" 2
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/sdsocuser/workspace/test/src/calcDist.cpp" 2
extern "C" {
#pragma line 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* These are defined by the user (or the compiler)
   to specify the desired environment:
#pragma empty_line
   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   __STDC_WANT_LIB_EXT2__
			Extensions to ISO C99 from TR 27431-2:2010.
   __STDC_WANT_IEC_60559_BFP_EXT__
			Extensions to ISO C11 from TS 18661-1:2014.
   __STDC_WANT_IEC_60559_FUNCS_EXT__
			Extensions to ISO C11 from TS 18661-4:2015.
   __STDC_WANT_IEC_60559_TYPES_EXT__
			Extensions to ISO C11 from TS 18661-3:2015.
#pragma empty_line
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).
#pragma empty_line
   _FORTIFY_SOURCE	Add security hardening to many library functions.
			Set to 1 or 2; 2 performs stricter checks than 1.
#pragma empty_line
   _REENTRANT, _THREAD_SAFE
			Obsolete; equivalent to _POSIX_C_SOURCE=199506L.
#pragma empty_line
   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.
#pragma empty_line
   These are defined by this file and are used by the
   header files to decide what to declare or define:
#pragma empty_line
   __GLIBC_USE (F)	Define things from feature set F.  This is defined
			to 1 or 0; the subsequent macros are either defined
			or undefined, and those tests should be moved to
			__GLIBC_USE.
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_ISOCXX11	Define ISO C++11 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.
#pragma empty_line
   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.
#pragma empty_line
   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.
#pragma empty_line
   ISO C feature test macros depend on the definition of the macro
   when an affected header is included, not when the first system
   header is included, and so they are handled in
   <bits/libc-header-start.h>, which does not have a multiple include
   guard.  Feature test macros that can be handled from the first
   system header included are handled here.  */
#pragma empty_line
#pragma empty_line
/* Undefine everything, so we get a clean slate.  */
#pragma line 144 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Convenience macro to test the version of gcc.
   Use like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Whether to use feature set F.  */
#pragma empty_line
#pragma empty_line
/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
#pragma line 213 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
#pragma line 224 "/usr/include/features.h" 3 4
/* This is to enable the ISO C11 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable the ISO C99 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable compatibility for ISO C++17.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is to enable compatibility for ISO C++11.
   Check the temporary macro for now, too.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
#pragma line 284 "/usr/include/features.h" 3 4
/* Some C libraries once required _REENTRANT and/or _THREAD_SAFE to be
   defined in all multithreaded code.  GNU libc has not required this
   for many years.  We now treat them as compatibility synonyms for
   _POSIX_C_SOURCE=199506L, which is the earliest level of POSIX with
   comprehensive support for multithreaded code.  Using them never
   lowers the selected level of POSIX conformance, only raises it.  */
#pragma line 390 "/usr/include/features.h" 3 4
/* The function 'gets' existed in C89, but is impossible to use
   safely.  It has been removed from ISO C11 and ISO C++14.  Note: for
   compatibility with various implementations of <cstdio>, this test
   must consider only the value of __cplusplus when compiling C++.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
#pragma empty_line
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
#pragma empty_line
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
#pragma line 52 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
#pragma empty_line
#pragma empty_line
/* We do not support C11 <threads.h>.  */
#pragma line 403 "/usr/include/features.h" 2 3 4
#pragma empty_line
/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is here only because every header file already includes this one.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* We are almost always included from features.h. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Some user header file might have defined this before.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
#pragma line 49 "/usr/include/sys/cdefs.h" 3 4
/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
#pragma line 83 "/usr/include/sys/cdefs.h" 3 4
/* Compilers that are not clang may object to
       #if defined __clang__ && __has_extension(...)
   even though they do not need to evaluate the right-hand side of the &&.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is not a typedef so `const __ptr_t' does the right thing.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* C++ needs to know that types and declarations are C, not C++.  */
#pragma line 117 "/usr/include/sys/cdefs.h" 3 4
/* Fortify support.  */
#pragma line 133 "/usr/include/sys/cdefs.h" 3 4
/* Support for flexible arrays.
   Headers that should use flexible arrays only if they're "real"
   (e.g. only if they won't affect sizeof()) should test
   #if __glibc_c99_flexarr_available.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* GCC 2.97 supports C99 flexible array members as an extension,
   even when in C89 mode or compiling C++ (any version).  */
#pragma line 157 "/usr/include/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).
#pragma empty_line
   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
#pragma line 184 "/usr/include/sys/cdefs.h" 3 4
/*
#elif __SOME_OTHER_COMPILER__
#pragma empty_line
# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/
#pragma empty_line
#pragma empty_line
/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This declaration tells the compiler that the value is constant.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#pragma line 244 "/usr/include/sys/cdefs.h" 3 4
/* Since version 3.2, gcc allows marking deprecated functions.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Since version 4.5, gcc also allows one to specify the message printed
   when a deprecated function is used.  clang claims to be gcc 4.2, but
   may also support this feature.  */
#pragma line 262 "/usr/include/sys/cdefs.h" 3 4
/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
#pragma line 308 "/usr/include/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */
#pragma empty_line
/* The Linux kernel defines __always_inline in stddef.h (283d7573), and
   it conflicts with this definition.  Therefore undefine it first to
   allow either header to be included first.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.
#pragma empty_line
   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked fot by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
#pragma line 354 "/usr/include/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* __restrict is known in EGCS 1.2 and above. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
#pragma line 427 "/usr/include/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 428 "/usr/include/sys/cdefs.h" 2 3 4
#pragma line 1 "/usr/include/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* long double is distinct from double, so there is nothing to
   define here.  */
#pragma line 429 "/usr/include/sys/cdefs.h" 2 3 4
#pragma line 462 "/usr/include/sys/cdefs.h" 3 4
/* __glibc_macro_warning (MESSAGE) issues warning MESSAGE.  This is
   intended for use in preprocessor macros.
#pragma empty_line
   Note: MESSAGE must be a _single_ string; concatenation of string
   literals is not supported.  */
#pragma line 475 "/usr/include/sys/cdefs.h" 3 4
/* Generic selection (ISO C11) is a C-only feature, available in GCC
   since version 4.9.  Previous versions do not provide generic
   selection, even though they might set __STDC_VERSION__ to 201112L,
   when in -std=c11 mode.  Thus, we must check for !defined __GNUC__
   when testing __STDC_VERSION__ for generic selection support.
   On the other hand, Clang also defines __GNUC__, so a clang-specific
   check is required to enable the use of generic selection.  */
#pragma line 425 "/usr/include/features.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Decide whether we can define 'extern inline' functions in headers.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
#pragma empty_line
#pragma line 1 "/usr/include/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/gnu/stubs-32.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
#pragma line 8 "/usr/include/gnu/stubs.h" 2 3 4
#pragma line 449 "/usr/include/features.h" 2 3 4
#pragma line 34 "/usr/include/bits/libc-header-start.h" 2 3 4
#pragma empty_line
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#pragma line 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#pragma line 28 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
/* Get definitions of __intmax_t and __uintmax_t.  */
#pragma empty_line
#pragma line 1 "/usr/include/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/*
 * Never include this file directly; use <sys/types.h> instead.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
#pragma line 28 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
#pragma empty_line
/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
#pragma empty_line
#pragma empty_line
/* quad_t is also 64 bits.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#pragma empty_line
#pragma empty_line
/* Largest integral types.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.
#pragma empty_line
	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long
#pragma empty_line
   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.
#pragma empty_line
   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
#pragma line 113 "/usr/include/bits/types.h" 3 4
/* We want __extension__ before typedef's that use nonstandard base types
   such as `long long' in C89 mode.  */
#pragma line 130 "/usr/include/bits/types.h" 3 4
#pragma line 1 "/usr/include/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 26 "/usr/include/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */
#pragma empty_line
/* X32 kernel interface is 64-bit.  */
#pragma line 91 "/usr/include/bits/typesizes.h" 3 4
/* Number of descriptors that can fit in an `fd_set'.  */
#pragma line 131 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
__extension__ typedef __u_quad_t __dev_t; /* Type of device numbers.  */
__extension__ typedef unsigned int __uid_t; /* Type of user identifications.  */
__extension__ typedef unsigned int __gid_t; /* Type of group identifications.  */
__extension__ typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
__extension__ typedef __u_quad_t __ino64_t; /* Type of file serial numbers (LFS).*/
__extension__ typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
__extension__ typedef unsigned int __nlink_t; /* Type of file link counts.  */
__extension__ typedef long int __off_t; /* Type of file sizes and offsets.  */
__extension__ typedef __quad_t __off64_t; /* Type of file sizes and offsets (LFS).  */
__extension__ typedef int __pid_t; /* Type of process identifications.  */
__extension__ typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
__extension__ typedef long int __clock_t; /* Type of CPU usage counts.  */
__extension__ typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
__extension__ typedef __u_quad_t __rlim64_t; /* Type for resource measurement (LFS).  */
__extension__ typedef unsigned int __id_t; /* General type for IDs.  */
__extension__ typedef long int __time_t; /* Seconds since the Epoch.  */
__extension__ typedef unsigned int __useconds_t; /* Count of microseconds.  */
__extension__ typedef long int __suseconds_t; /* Signed count of microseconds.  */
#pragma empty_line
__extension__ typedef int __daddr_t; /* The type of a disk address.  */
__extension__ typedef int __key_t; /* Type of an IPC key.  */
#pragma empty_line
/* Clock ID used in clock and timer functions.  */
__extension__ typedef int __clockid_t;
#pragma empty_line
/* Timer ID returned by `timer_create'.  */
__extension__ typedef void * __timer_t;
#pragma empty_line
/* Type to represent block size.  */
__extension__ typedef long int __blksize_t;
#pragma empty_line
/* Types from the Large File Support interface.  */
#pragma empty_line
/* Type to count number of disk blocks.  */
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
#pragma empty_line
/* Type to count file system blocks.  */
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
#pragma empty_line
/* Type to count file system nodes.  */
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
#pragma empty_line
/* Type of miscellaneous file system fields.  */
__extension__ typedef int __fsword_t;
#pragma empty_line
__extension__ typedef int __ssize_t; /* Type of a byte count, or error.  */
#pragma empty_line
/* Signed long type used in system calls.  */
__extension__ typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
__extension__ typedef unsigned long int __syscall_ulong_t;
#pragma empty_line
/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef char *__caddr_t;
#pragma empty_line
/* Duplicates info from stdint.h but this is used in unistd.h.  */
__extension__ typedef int __intptr_t;
#pragma empty_line
/* Duplicate info from sys/socket.h.  */
__extension__ typedef unsigned int __socklen_t;
#pragma empty_line
/* C99: An integer type that can be accessed as an atomic entity,
   even in the presence of asynchronous interrupts.
   It is not currently necessary for this to be machine-specific.  */
typedef int __sig_atomic_t;
#pragma line 38 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Get machine-dependent vector math functions declarations.  */
#pragma empty_line
#pragma line 1 "/usr/include/bits/math-vector.h" 1 3 4
/* Platform-specific SIMD declarations of math functions.
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Get default empty definitions for simd declarations.  */
#pragma empty_line
#pragma line 1 "/usr/include/bits/libm-simd-decl-stubs.h" 1 3 4
/* Empty definitions required for __MATHCALL_VEC unfolding in mathcalls.h.
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Needed definitions could be generated with:
   for func in $(grep __MATHCALL_VEC math/bits/mathcalls.h |\
		 sed -r "s|__MATHCALL_VEC.?\(||; s|,.*||"); do
     echo "#define __DECL_SIMD_${func}";
     echo "#define __DECL_SIMD_${func}f";
     echo "#define __DECL_SIMD_${func}l";
   done
 */
#pragma line 26 "/usr/include/bits/math-vector.h" 2 3 4
#pragma line 41 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Gather machine dependent type support.  */
#pragma empty_line
#pragma line 1 "/usr/include/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the IEEE 754 binary128 format, and this
   glibc includes corresponding *f128 interfaces for it.  The required
   libgcc support was added some time after the basic compiler
   support, for x86_64 and x86.  */
#pragma line 38 "/usr/include/bits/floatn.h" 3 4
/* Defined to 1 if __HAVE_FLOAT128 is 1 and the type is ABI-distinct
   from the default float, double and long double types in this glibc.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for _Float64x, and this
   glibc includes corresponding *f64x interfaces for it.  */
#pragma empty_line
#pragma empty_line
/* Defined to 1 if __HAVE_FLOAT64X is 1 and _Float64x has the format
   of long double.  Otherwise, if __HAVE_FLOAT64X is 1, _Float64x has
   the format of _Float128, which must be different from that of long
   double.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Defined to concatenate the literal suffix to be used with _Float128
   types, if __HAVE_FLOAT128 is 1. */
#pragma line 70 "/usr/include/bits/floatn.h" 3 4
/* Defined to a complex binary128 type if __HAVE_FLOAT128 is 1.  */
#pragma line 82 "/usr/include/bits/floatn.h" 3 4
/* The remaining of this file provides support for older compilers.  */
#pragma line 120 "/usr/include/bits/floatn.h" 3 4
#pragma line 1 "/usr/include/bits/floatn-common.h" 1 3 4
/* Macros to control TS 18661-3 glibc features where the same
   definitions are appropriate for all platforms.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* long double is distinct from double, so there is nothing to
   define here.  */
#pragma line 25 "/usr/include/bits/floatn-common.h" 2 3 4
#pragma empty_line
/* This header should be included at the bottom of each bits/floatn.h.
   It defines the following macros for each _FloatN and _FloatNx type,
   where the same definitions, or definitions based only on the macros
   in bits/floatn.h, are appropriate for all glibc configurations.  */
#pragma empty_line
/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for this type, and this
   glibc includes corresponding *fN or *fNx interfaces for it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Defined to 1 if the corresponding __HAVE_<type> macro is 1 and the
   type is the first with its format in the sequence of (the default
   choices for) float, double, long double, _Float16, _Float32,
   _Float64, _Float128, _Float32x, _Float64x, _Float128x for this
   glibc; that is, if functions present once per floating-point format
   rather than once per type are present for this type.
#pragma empty_line
   All configurations supported by glibc have _Float32 the same format
   as float, _Float64 and _Float32x the same format as double, the
   _Float64x the same format as either long double or _Float128.  No
   configurations support _Float128x or, as of GCC 7, have compiler
   support for a type meeting the requirements for _Float128x.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Defined to 1 if any _FloatN or _FloatNx types that are not
   ABI-distinct are however distinct types at the C language level (so
   for the purposes of __builtin_types_compatible_p and _Generic).  */
#pragma line 70 "/usr/include/bits/floatn-common.h" 3 4
/* Defined to concatenate the literal suffix to be used with _FloatN
   or _FloatNx types, if __HAVE_<type> is 1.  The corresponding
   literal suffixes exist since GCC 7, for C only.  */
#pragma line 130 "/usr/include/bits/floatn-common.h" 3 4
/* Defined to a complex type if __HAVE_<type> is 1.  */
#pragma line 188 "/usr/include/bits/floatn-common.h" 3 4
/* The remaining of this file provides support for older compilers.  */
#pragma line 207 "/usr/include/bits/floatn-common.h" 3 4
typedef float _Float32;
#pragma line 221 "/usr/include/bits/floatn-common.h" 3 4
/* If double, long double and _Float64 all have the same set of
   values, TS 18661-3 requires the usual arithmetic conversions on
   long double and _Float64 to produce _Float64.  For this to be the
   case when building with a compiler without a distinct _Float64
   type, _Float64 must be a typedef for long double, not for
   double.  */
#pragma line 244 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float64;
#pragma line 261 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float32x;
#pragma line 278 "/usr/include/bits/floatn-common.h" 3 4
typedef long double _Float64x;
#pragma line 121 "/usr/include/bits/floatn.h" 2 3 4
#pragma line 44 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Value returned on overflow.  With IEEE 754 floating point, this is
   +Infinity, otherwise the largest representable positive value.  */
#pragma line 89 "/usr/include/math.h" 3 4
/* IEEE positive infinity.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE Not A Number.  */
#pragma line 108 "/usr/include/math.h" 3 4
/* Signaling NaN macros, if supported.  */
#pragma line 137 "/usr/include/math.h" 3 4
/* Get __GLIBC_FLT_EVAL_METHOD.  */
#pragma empty_line
#pragma line 1 "/usr/include/bits/flt-eval-method.h" 1 3 4
/* Define __GLIBC_FLT_EVAL_METHOD.  x86 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 139 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Define the following typedefs.
#pragma empty_line
    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions
*/
#pragma empty_line
typedef float float_t;
typedef double double_t;
#pragma line 180 "/usr/include/math.h" 3 4
/* Define macros for the return values of ilogb and llogb, based on
   __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.
#pragma empty_line
    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.
    FP_LLOGB0	Expands to a value returned by `llogb (0.0)'.
    FP_LLOGBNAN	Expands to a value returned by `llogb (NAN)'.
#pragma empty_line
*/
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/fp-logb.h" 1 3 4
/* Define __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.  x86 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma line 191 "/usr/include/math.h" 2 3 4
#pragma line 221 "/usr/include/math.h" 3 4
/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:
#pragma empty_line
    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.
*/
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/fp-fast.h" 1 3 4
/* Define FP_FAST_* macros.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
   builtins are supported.  */
#pragma line 234 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
/* Rounding direction macros for fromfp functions.  */
enum
  {
    FP_INT_UPWARD =
#pragma empty_line
      0,
    FP_INT_DOWNWARD =
#pragma empty_line
      1,
    FP_INT_TOWARDZERO =
#pragma empty_line
      2,
    FP_INT_TONEARESTFROMZERO =
#pragma empty_line
      3,
    FP_INT_TONEAREST =
#pragma empty_line
      4,
  };
#pragma empty_line
#pragma empty_line
/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */
#pragma line 289 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinf (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnan (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Test equality.  */
extern int __iseqsig (double __x, double __y) throw ();
#pragma empty_line
/* Test for signaling NaN.  */
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));
#pragma line 290 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
/* Arc sine of X.  */
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
/* Arc tangent of X.  */
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
/* Arc tangent of Y/X.  */
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
/* Sine of X.  */
extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
/* Tangent of X.  */
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
/* Hyperbolic sine of X.  */
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
/* Hyperbolic tangent of X.  */
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern double exp (double __x) throw (); extern double __exp (double __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern double log (double __x) throw (); extern double __log (double __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinf (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finite (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 210 "/usr/include/bits/mathcalls.h" 3 4
/* Return nonzero if VALUE is not a number.  */
extern int isnan (double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern double tgamma (double) throw (); extern double __tgamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern double gamma (double) throw (); extern double __gamma (double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern double rint (double __x) throw (); extern double __rint (double __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter (double __x, double __y) throw (); extern double __nextafter (double __x, double __y) throw ();
#pragma empty_line
extern double nexttoward (double __x, long double __y) throw (); extern double __nexttoward (double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern double nextdown (double __x) throw (); extern double __nextdown (double __x) throw ();
/* Return X + epsilon.  */
extern double nextup (double __x) throw (); extern double __nextup (double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogb (double __x) throw (); extern long int __llogb (double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern double roundeven (double __x) throw () __attribute__ ((__const__)); extern double __roundeven (double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfp (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern double fmaxmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern double fminmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorder (double __x, double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermag (double __x, double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalize (double *__cx, const double *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern double getpayload (const double *__x) throw (); extern double __getpayload (const double *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayload (double *__x, double __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsig (double *__x, double __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
#pragma line 291 "/usr/include/math.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Test equality.  */
extern int __iseqsigf (float __x, float __y) throw ();
#pragma empty_line
/* Test for signaling NaN.  */
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));
#pragma line 307 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
/* Arc sine of X.  */
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
/* Arc tangent of X.  */
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
/* Arc tangent of Y/X.  */
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
/* Sine of X.  */
extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
/* Tangent of X.  */
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
/* Hyperbolic sine of X.  */
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
/* Hyperbolic tangent of X.  */
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
/* Hyperbolic arc sine of X.  */
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern float expf (float __x) throw (); extern float __expf (float __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern float logf (float __x) throw (); extern float __logf (float __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinff (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitef (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 210 "/usr/include/bits/mathcalls.h" 3 4
/* Return nonzero if VALUE is not a number.  */
extern int isnanf (float __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern float gammaf (float) throw (); extern float __gammaf (float) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf (float __x, float __y) throw (); extern float __nextafterf (float __x, float __y) throw ();
#pragma empty_line
extern float nexttowardf (float __x, long double __y) throw (); extern float __nexttowardf (float __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern float nextdownf (float __x) throw (); extern float __nextdownf (float __x) throw ();
/* Return X + epsilon.  */
extern float nextupf (float __x) throw (); extern float __nextupf (float __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbf (float __x) throw (); extern long int __llogbf (float __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern float roundevenf (float __x) throw () __attribute__ ((__const__)); extern float __roundevenf (float __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern float fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern float fminmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderf (float __x, float __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagf (float __x, float __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizef (float *__cx, const float *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern float getpayloadf (const float *__x) throw (); extern float __getpayloadf (const float *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadf (float *__x, float __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigf (float *__x, float __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
#pragma line 308 "/usr/include/math.h" 2 3 4
#pragma line 341 "/usr/include/math.h" 3 4
/* Include the file of declarations again, this time using `long double'
   instead of `double' and appending l to each function name.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
/* Classify given number.  */
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Test for negative number.  */
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return nonzero if VALUE is not a number.  */
extern int __isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Test equality.  */
extern int __iseqsigl (long double __x, long double __y) throw ();
#pragma empty_line
/* Test for signaling NaN.  */
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));
#pragma line 350 "/usr/include/math.h" 2 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
/* Arc sine of X.  */
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
/* Arc tangent of X.  */
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
/* Arc tangent of Y/X.  */
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
/* Sine of X.  */
extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
/* Tangent of X.  */
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
/* Hyperbolic sine of X.  */
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
/* Hyperbolic tangent of X.  */
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
/* Hyperbolic arc sine of X.  */
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int isinfl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero if VALUE is finite and not NaN.  */
extern int finitel (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return the remainder of X/Y.  */
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return the fractional part of X after dividing out `ilogb (X)'.  */
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X with its signed changed to Y's.  */
extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 210 "/usr/include/bits/mathcalls.h" 3 4
/* Return nonzero if VALUE is not a number.  */
extern int isnanl (long double __value) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Bessel functions.  */
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Obsolete alias for `lgamma'.  */
extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl (long double __x, long double __y) throw (); extern long double __nextafterl (long double __x, long double __y) throw ();
#pragma empty_line
extern long double nexttowardl (long double __x, long double __y) throw (); extern long double __nexttowardl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern long double nextdownl (long double __x) throw (); extern long double __nextdownl (long double __x) throw ();
/* Return X + epsilon.  */
extern long double nextupl (long double __x) throw (); extern long double __nextupl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbl (long double __x) throw (); extern long int __llogbl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern long double roundevenl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundevenl (long double __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern long double fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern long double fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderl (long double __x, long double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagl (long double __x, long double __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizel (long double *__cx, const long double *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern long double getpayloadl (const long double *__x) throw (); extern long double __getpayloadl (const long double *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadl (long double *__x, long double __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigl (long double *__x, long double __payload) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
#pragma line 351 "/usr/include/math.h" 2 3 4
#pragma line 360 "/usr/include/math.h" 3 4
/* Include the file of declarations for _FloatN and _FloatNx
   types.  */
#pragma line 389 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern _Float32 acosf32 (_Float32 __x) throw (); extern _Float32 __acosf32 (_Float32 __x) throw ();
/* Arc sine of X.  */
extern _Float32 asinf32 (_Float32 __x) throw (); extern _Float32 __asinf32 (_Float32 __x) throw ();
/* Arc tangent of X.  */
extern _Float32 atanf32 (_Float32 __x) throw (); extern _Float32 __atanf32 (_Float32 __x) throw ();
/* Arc tangent of Y/X.  */
extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) throw (); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern _Float32 cosf32 (_Float32 __x) throw (); extern _Float32 __cosf32 (_Float32 __x) throw ();
/* Sine of X.  */
extern _Float32 sinf32 (_Float32 __x) throw (); extern _Float32 __sinf32 (_Float32 __x) throw ();
/* Tangent of X.  */
extern _Float32 tanf32 (_Float32 __x) throw (); extern _Float32 __tanf32 (_Float32 __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern _Float32 coshf32 (_Float32 __x) throw (); extern _Float32 __coshf32 (_Float32 __x) throw ();
/* Hyperbolic sine of X.  */
extern _Float32 sinhf32 (_Float32 __x) throw (); extern _Float32 __sinhf32 (_Float32 __x) throw ();
/* Hyperbolic tangent of X.  */
extern _Float32 tanhf32 (_Float32 __x) throw (); extern _Float32 __tanhf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw (); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern _Float32 acoshf32 (_Float32 __x) throw (); extern _Float32 __acoshf32 (_Float32 __x) throw ();
/* Hyperbolic arc sine of X.  */
extern _Float32 asinhf32 (_Float32 __x) throw (); extern _Float32 __asinhf32 (_Float32 __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern _Float32 atanhf32 (_Float32 __x) throw (); extern _Float32 __atanhf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern _Float32 expf32 (_Float32 __x) throw (); extern _Float32 __expf32 (_Float32 __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern _Float32 frexpf32 (_Float32 __x, int *__exponent) throw (); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern _Float32 ldexpf32 (_Float32 __x, int __exponent) throw (); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern _Float32 logf32 (_Float32 __x) throw (); extern _Float32 __logf32 (_Float32 __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern _Float32 log10f32 (_Float32 __x) throw (); extern _Float32 __log10f32 (_Float32 __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) throw (); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern _Float32 exp10f32 (_Float32 __x) throw (); extern _Float32 __exp10f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern _Float32 expm1f32 (_Float32 __x) throw (); extern _Float32 __expm1f32 (_Float32 __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern _Float32 log1pf32 (_Float32 __x) throw (); extern _Float32 __log1pf32 (_Float32 __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern _Float32 logbf32 (_Float32 __x) throw (); extern _Float32 __logbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern _Float32 exp2f32 (_Float32 __x) throw (); extern _Float32 __exp2f32 (_Float32 __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern _Float32 log2f32 (_Float32 __x) throw (); extern _Float32 __log2f32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern _Float32 powf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern _Float32 sqrtf32 (_Float32 __x) throw (); extern _Float32 __sqrtf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern _Float32 cbrtf32 (_Float32 __x) throw (); extern _Float32 __cbrtf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern _Float32 ceilf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern _Float32 fabsf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern _Float32 floorf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) throw ();
#pragma line 195 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern _Float32 nanf32 (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float32 __nanf32 (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 216 "/usr/include/bits/mathcalls.h" 3 4
/* Bessel functions.  */
extern _Float32 j0f32 (_Float32) throw (); extern _Float32 __j0f32 (_Float32) throw ();
extern _Float32 j1f32 (_Float32) throw (); extern _Float32 __j1f32 (_Float32) throw ();
extern _Float32 jnf32 (int, _Float32) throw (); extern _Float32 __jnf32 (int, _Float32) throw ();
extern _Float32 y0f32 (_Float32) throw (); extern _Float32 __y0f32 (_Float32) throw ();
extern _Float32 y1f32 (_Float32) throw (); extern _Float32 __y1f32 (_Float32) throw ();
extern _Float32 ynf32 (int, _Float32) throw (); extern _Float32 __ynf32 (int, _Float32) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern _Float32 erff32 (_Float32) throw (); extern _Float32 __erff32 (_Float32) throw ();
extern _Float32 erfcf32 (_Float32) throw (); extern _Float32 __erfcf32 (_Float32) throw ();
extern _Float32 lgammaf32 (_Float32) throw (); extern _Float32 __lgammaf32 (_Float32) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern _Float32 tgammaf32 (_Float32) throw (); extern _Float32 __tgammaf32 (_Float32) throw ();
#pragma line 246 "/usr/include/bits/mathcalls.h" 3 4
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) throw (); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern _Float32 rintf32 (_Float32 __x) throw (); extern _Float32 __rintf32 (_Float32 __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern _Float32 nextdownf32 (_Float32 __x) throw (); extern _Float32 __nextdownf32 (_Float32 __x) throw ();
/* Return X + epsilon.  */
extern _Float32 nextupf32 (_Float32 __x) throw (); extern _Float32 __nextupf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float32 scalbnf32 (_Float32 __x, int __n) throw (); extern _Float32 __scalbnf32 (_Float32 __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf32 (_Float32 __x) throw (); extern int __ilogbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbf32 (_Float32 __x) throw (); extern long int __llogbf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float32 scalblnf32 (_Float32 __x, long int __n) throw (); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern _Float32 nearbyintf32 (_Float32 __x) throw (); extern _Float32 __nearbyintf32 (_Float32 __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern _Float32 roundf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern _Float32 truncf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw (); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf32 (_Float32 __x) throw (); extern long int __lrintf32 (_Float32 __x) throw ();
__extension__
extern long long int llrintf32 (_Float32 __x) throw (); extern long long int __llrintf32 (_Float32 __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf32 (_Float32 __x) throw (); extern long int __lroundf32 (_Float32 __x) throw ();
__extension__
extern long long int llroundf32 (_Float32 __x) throw (); extern long long int __llroundf32 (_Float32 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern _Float32 fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw (); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern _Float32 roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderf32 (_Float32 __x, _Float32 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagf32 (_Float32 __x, _Float32 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern _Float32 getpayloadf32 (const _Float32 *__x) throw (); extern _Float32 __getpayloadf32 (const _Float32 *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) throw ();
#pragma line 390 "/usr/include/math.h" 2 3 4
#pragma line 406 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern _Float64 acosf64 (_Float64 __x) throw (); extern _Float64 __acosf64 (_Float64 __x) throw ();
/* Arc sine of X.  */
extern _Float64 asinf64 (_Float64 __x) throw (); extern _Float64 __asinf64 (_Float64 __x) throw ();
/* Arc tangent of X.  */
extern _Float64 atanf64 (_Float64 __x) throw (); extern _Float64 __atanf64 (_Float64 __x) throw ();
/* Arc tangent of Y/X.  */
extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) throw (); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern _Float64 cosf64 (_Float64 __x) throw (); extern _Float64 __cosf64 (_Float64 __x) throw ();
/* Sine of X.  */
extern _Float64 sinf64 (_Float64 __x) throw (); extern _Float64 __sinf64 (_Float64 __x) throw ();
/* Tangent of X.  */
extern _Float64 tanf64 (_Float64 __x) throw (); extern _Float64 __tanf64 (_Float64 __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern _Float64 coshf64 (_Float64 __x) throw (); extern _Float64 __coshf64 (_Float64 __x) throw ();
/* Hyperbolic sine of X.  */
extern _Float64 sinhf64 (_Float64 __x) throw (); extern _Float64 __sinhf64 (_Float64 __x) throw ();
/* Hyperbolic tangent of X.  */
extern _Float64 tanhf64 (_Float64 __x) throw (); extern _Float64 __tanhf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw (); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern _Float64 acoshf64 (_Float64 __x) throw (); extern _Float64 __acoshf64 (_Float64 __x) throw ();
/* Hyperbolic arc sine of X.  */
extern _Float64 asinhf64 (_Float64 __x) throw (); extern _Float64 __asinhf64 (_Float64 __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern _Float64 atanhf64 (_Float64 __x) throw (); extern _Float64 __atanhf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern _Float64 expf64 (_Float64 __x) throw (); extern _Float64 __expf64 (_Float64 __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern _Float64 frexpf64 (_Float64 __x, int *__exponent) throw (); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern _Float64 ldexpf64 (_Float64 __x, int __exponent) throw (); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern _Float64 logf64 (_Float64 __x) throw (); extern _Float64 __logf64 (_Float64 __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern _Float64 log10f64 (_Float64 __x) throw (); extern _Float64 __log10f64 (_Float64 __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) throw (); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern _Float64 exp10f64 (_Float64 __x) throw (); extern _Float64 __exp10f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern _Float64 expm1f64 (_Float64 __x) throw (); extern _Float64 __expm1f64 (_Float64 __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern _Float64 log1pf64 (_Float64 __x) throw (); extern _Float64 __log1pf64 (_Float64 __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern _Float64 logbf64 (_Float64 __x) throw (); extern _Float64 __logbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern _Float64 exp2f64 (_Float64 __x) throw (); extern _Float64 __exp2f64 (_Float64 __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern _Float64 log2f64 (_Float64 __x) throw (); extern _Float64 __log2f64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern _Float64 powf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern _Float64 sqrtf64 (_Float64 __x) throw (); extern _Float64 __sqrtf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern _Float64 cbrtf64 (_Float64 __x) throw (); extern _Float64 __cbrtf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern _Float64 ceilf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern _Float64 fabsf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern _Float64 floorf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) throw ();
#pragma line 195 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern _Float64 nanf64 (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float64 __nanf64 (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 216 "/usr/include/bits/mathcalls.h" 3 4
/* Bessel functions.  */
extern _Float64 j0f64 (_Float64) throw (); extern _Float64 __j0f64 (_Float64) throw ();
extern _Float64 j1f64 (_Float64) throw (); extern _Float64 __j1f64 (_Float64) throw ();
extern _Float64 jnf64 (int, _Float64) throw (); extern _Float64 __jnf64 (int, _Float64) throw ();
extern _Float64 y0f64 (_Float64) throw (); extern _Float64 __y0f64 (_Float64) throw ();
extern _Float64 y1f64 (_Float64) throw (); extern _Float64 __y1f64 (_Float64) throw ();
extern _Float64 ynf64 (int, _Float64) throw (); extern _Float64 __ynf64 (int, _Float64) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern _Float64 erff64 (_Float64) throw (); extern _Float64 __erff64 (_Float64) throw ();
extern _Float64 erfcf64 (_Float64) throw (); extern _Float64 __erfcf64 (_Float64) throw ();
extern _Float64 lgammaf64 (_Float64) throw (); extern _Float64 __lgammaf64 (_Float64) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern _Float64 tgammaf64 (_Float64) throw (); extern _Float64 __tgammaf64 (_Float64) throw ();
#pragma line 246 "/usr/include/bits/mathcalls.h" 3 4
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) throw (); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern _Float64 rintf64 (_Float64 __x) throw (); extern _Float64 __rintf64 (_Float64 __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern _Float64 nextdownf64 (_Float64 __x) throw (); extern _Float64 __nextdownf64 (_Float64 __x) throw ();
/* Return X + epsilon.  */
extern _Float64 nextupf64 (_Float64 __x) throw (); extern _Float64 __nextupf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float64 scalbnf64 (_Float64 __x, int __n) throw (); extern _Float64 __scalbnf64 (_Float64 __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf64 (_Float64 __x) throw (); extern int __ilogbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbf64 (_Float64 __x) throw (); extern long int __llogbf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float64 scalblnf64 (_Float64 __x, long int __n) throw (); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern _Float64 nearbyintf64 (_Float64 __x) throw (); extern _Float64 __nearbyintf64 (_Float64 __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern _Float64 roundf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern _Float64 truncf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw (); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf64 (_Float64 __x) throw (); extern long int __lrintf64 (_Float64 __x) throw ();
__extension__
extern long long int llrintf64 (_Float64 __x) throw (); extern long long int __llrintf64 (_Float64 __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf64 (_Float64 __x) throw (); extern long int __lroundf64 (_Float64 __x) throw ();
__extension__
extern long long int llroundf64 (_Float64 __x) throw (); extern long long int __llroundf64 (_Float64 __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern _Float64 fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw (); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern _Float64 roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderf64 (_Float64 __x, _Float64 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagf64 (_Float64 __x, _Float64 __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern _Float64 getpayloadf64 (const _Float64 *__x) throw (); extern _Float64 __getpayloadf64 (const _Float64 *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) throw ();
#pragma line 407 "/usr/include/math.h" 2 3 4
#pragma line 440 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern _Float32x acosf32x (_Float32x __x) throw (); extern _Float32x __acosf32x (_Float32x __x) throw ();
/* Arc sine of X.  */
extern _Float32x asinf32x (_Float32x __x) throw (); extern _Float32x __asinf32x (_Float32x __x) throw ();
/* Arc tangent of X.  */
extern _Float32x atanf32x (_Float32x __x) throw (); extern _Float32x __atanf32x (_Float32x __x) throw ();
/* Arc tangent of Y/X.  */
extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) throw (); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern _Float32x cosf32x (_Float32x __x) throw (); extern _Float32x __cosf32x (_Float32x __x) throw ();
/* Sine of X.  */
extern _Float32x sinf32x (_Float32x __x) throw (); extern _Float32x __sinf32x (_Float32x __x) throw ();
/* Tangent of X.  */
extern _Float32x tanf32x (_Float32x __x) throw (); extern _Float32x __tanf32x (_Float32x __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern _Float32x coshf32x (_Float32x __x) throw (); extern _Float32x __coshf32x (_Float32x __x) throw ();
/* Hyperbolic sine of X.  */
extern _Float32x sinhf32x (_Float32x __x) throw (); extern _Float32x __sinhf32x (_Float32x __x) throw ();
/* Hyperbolic tangent of X.  */
extern _Float32x tanhf32x (_Float32x __x) throw (); extern _Float32x __tanhf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw (); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern _Float32x acoshf32x (_Float32x __x) throw (); extern _Float32x __acoshf32x (_Float32x __x) throw ();
/* Hyperbolic arc sine of X.  */
extern _Float32x asinhf32x (_Float32x __x) throw (); extern _Float32x __asinhf32x (_Float32x __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern _Float32x atanhf32x (_Float32x __x) throw (); extern _Float32x __atanhf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern _Float32x expf32x (_Float32x __x) throw (); extern _Float32x __expf32x (_Float32x __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern _Float32x frexpf32x (_Float32x __x, int *__exponent) throw (); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern _Float32x ldexpf32x (_Float32x __x, int __exponent) throw (); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern _Float32x logf32x (_Float32x __x) throw (); extern _Float32x __logf32x (_Float32x __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern _Float32x log10f32x (_Float32x __x) throw (); extern _Float32x __log10f32x (_Float32x __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) throw (); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern _Float32x exp10f32x (_Float32x __x) throw (); extern _Float32x __exp10f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern _Float32x expm1f32x (_Float32x __x) throw (); extern _Float32x __expm1f32x (_Float32x __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern _Float32x log1pf32x (_Float32x __x) throw (); extern _Float32x __log1pf32x (_Float32x __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern _Float32x logbf32x (_Float32x __x) throw (); extern _Float32x __logbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern _Float32x exp2f32x (_Float32x __x) throw (); extern _Float32x __exp2f32x (_Float32x __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern _Float32x log2f32x (_Float32x __x) throw (); extern _Float32x __log2f32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern _Float32x powf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern _Float32x sqrtf32x (_Float32x __x) throw (); extern _Float32x __sqrtf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern _Float32x cbrtf32x (_Float32x __x) throw (); extern _Float32x __cbrtf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern _Float32x ceilf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern _Float32x fabsf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern _Float32x floorf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) throw ();
#pragma line 195 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern _Float32x nanf32x (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float32x __nanf32x (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 216 "/usr/include/bits/mathcalls.h" 3 4
/* Bessel functions.  */
extern _Float32x j0f32x (_Float32x) throw (); extern _Float32x __j0f32x (_Float32x) throw ();
extern _Float32x j1f32x (_Float32x) throw (); extern _Float32x __j1f32x (_Float32x) throw ();
extern _Float32x jnf32x (int, _Float32x) throw (); extern _Float32x __jnf32x (int, _Float32x) throw ();
extern _Float32x y0f32x (_Float32x) throw (); extern _Float32x __y0f32x (_Float32x) throw ();
extern _Float32x y1f32x (_Float32x) throw (); extern _Float32x __y1f32x (_Float32x) throw ();
extern _Float32x ynf32x (int, _Float32x) throw (); extern _Float32x __ynf32x (int, _Float32x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern _Float32x erff32x (_Float32x) throw (); extern _Float32x __erff32x (_Float32x) throw ();
extern _Float32x erfcf32x (_Float32x) throw (); extern _Float32x __erfcf32x (_Float32x) throw ();
extern _Float32x lgammaf32x (_Float32x) throw (); extern _Float32x __lgammaf32x (_Float32x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern _Float32x tgammaf32x (_Float32x) throw (); extern _Float32x __tgammaf32x (_Float32x) throw ();
#pragma line 246 "/usr/include/bits/mathcalls.h" 3 4
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) throw (); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern _Float32x rintf32x (_Float32x __x) throw (); extern _Float32x __rintf32x (_Float32x __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern _Float32x nextdownf32x (_Float32x __x) throw (); extern _Float32x __nextdownf32x (_Float32x __x) throw ();
/* Return X + epsilon.  */
extern _Float32x nextupf32x (_Float32x __x) throw (); extern _Float32x __nextupf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float32x scalbnf32x (_Float32x __x, int __n) throw (); extern _Float32x __scalbnf32x (_Float32x __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf32x (_Float32x __x) throw (); extern int __ilogbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbf32x (_Float32x __x) throw (); extern long int __llogbf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float32x scalblnf32x (_Float32x __x, long int __n) throw (); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern _Float32x nearbyintf32x (_Float32x __x) throw (); extern _Float32x __nearbyintf32x (_Float32x __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern _Float32x roundf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern _Float32x truncf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw (); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf32x (_Float32x __x) throw (); extern long int __lrintf32x (_Float32x __x) throw ();
__extension__
extern long long int llrintf32x (_Float32x __x) throw (); extern long long int __llrintf32x (_Float32x __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf32x (_Float32x __x) throw (); extern long int __lroundf32x (_Float32x __x) throw ();
__extension__
extern long long int llroundf32x (_Float32x __x) throw (); extern long long int __llroundf32x (_Float32x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern _Float32x fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw (); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern _Float32x roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderf32x (_Float32x __x, _Float32x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagf32x (_Float32x __x, _Float32x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern _Float32x getpayloadf32x (const _Float32x *__x) throw (); extern _Float32x __getpayloadf32x (const _Float32x *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) throw ();
#pragma line 441 "/usr/include/math.h" 2 3 4
#pragma line 457 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.
#pragma empty_line
   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:
#pragma empty_line
   __MATHCALL (NAME,[_r], (ARGS...));
#pragma empty_line
   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.
#pragma empty_line
   Functions returning other types like `int' are declared using the macro:
#pragma empty_line
   __MATHDECL (TYPE, NAME,[_r], (ARGS...));
#pragma empty_line
   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.
#pragma empty_line
   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Trigonometric functions.  */
#pragma empty_line
/* Arc cosine of X.  */
extern _Float64x acosf64x (_Float64x __x) throw (); extern _Float64x __acosf64x (_Float64x __x) throw ();
/* Arc sine of X.  */
extern _Float64x asinf64x (_Float64x __x) throw (); extern _Float64x __asinf64x (_Float64x __x) throw ();
/* Arc tangent of X.  */
extern _Float64x atanf64x (_Float64x __x) throw (); extern _Float64x __atanf64x (_Float64x __x) throw ();
/* Arc tangent of Y/X.  */
extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) throw (); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) throw ();
#pragma empty_line
/* Cosine of X.  */
extern _Float64x cosf64x (_Float64x __x) throw (); extern _Float64x __cosf64x (_Float64x __x) throw ();
/* Sine of X.  */
extern _Float64x sinf64x (_Float64x __x) throw (); extern _Float64x __sinf64x (_Float64x __x) throw ();
/* Tangent of X.  */
extern _Float64x tanf64x (_Float64x __x) throw (); extern _Float64x __tanf64x (_Float64x __x) throw ();
#pragma empty_line
/* Hyperbolic functions.  */
#pragma empty_line
/* Hyperbolic cosine of X.  */
extern _Float64x coshf64x (_Float64x __x) throw (); extern _Float64x __coshf64x (_Float64x __x) throw ();
/* Hyperbolic sine of X.  */
extern _Float64x sinhf64x (_Float64x __x) throw (); extern _Float64x __sinhf64x (_Float64x __x) throw ();
/* Hyperbolic tangent of X.  */
extern _Float64x tanhf64x (_Float64x __x) throw (); extern _Float64x __tanhf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Cosine and sine of X.  */
extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw (); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Hyperbolic arc cosine of X.  */
extern _Float64x acoshf64x (_Float64x __x) throw (); extern _Float64x __acoshf64x (_Float64x __x) throw ();
/* Hyperbolic arc sine of X.  */
extern _Float64x asinhf64x (_Float64x __x) throw (); extern _Float64x __asinhf64x (_Float64x __x) throw ();
/* Hyperbolic arc tangent of X.  */
extern _Float64x atanhf64x (_Float64x __x) throw (); extern _Float64x __atanhf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Exponential and logarithmic functions.  */
#pragma empty_line
/* Exponential function of X.  */
extern _Float64x expf64x (_Float64x __x) throw (); extern _Float64x __expf64x (_Float64x __x) throw ();
#pragma empty_line
/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern _Float64x frexpf64x (_Float64x __x, int *__exponent) throw (); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) throw ();
#pragma empty_line
/* X times (two to the EXP power).  */
extern _Float64x ldexpf64x (_Float64x __x, int __exponent) throw (); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) throw ();
#pragma empty_line
/* Natural logarithm of X.  */
extern _Float64x logf64x (_Float64x __x) throw (); extern _Float64x __logf64x (_Float64x __x) throw ();
#pragma empty_line
/* Base-ten logarithm of X.  */
extern _Float64x log10f64x (_Float64x __x) throw (); extern _Float64x __log10f64x (_Float64x __x) throw ();
#pragma empty_line
/* Break VALUE into integral and fractional parts.  */
extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) throw (); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) throw () __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
/* Compute exponent to base ten.  */
extern _Float64x exp10f64x (_Float64x __x) throw (); extern _Float64x __exp10f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return exp(X) - 1.  */
extern _Float64x expm1f64x (_Float64x __x) throw (); extern _Float64x __expm1f64x (_Float64x __x) throw ();
#pragma empty_line
/* Return log(1 + X).  */
extern _Float64x log1pf64x (_Float64x __x) throw (); extern _Float64x __log1pf64x (_Float64x __x) throw ();
#pragma empty_line
/* Return the base 2 signed integral exponent of X.  */
extern _Float64x logbf64x (_Float64x __x) throw (); extern _Float64x __logbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Compute base-2 exponential of X.  */
extern _Float64x exp2f64x (_Float64x __x) throw (); extern _Float64x __exp2f64x (_Float64x __x) throw ();
#pragma empty_line
/* Compute base-2 logarithm of X.  */
extern _Float64x log2f64x (_Float64x __x) throw (); extern _Float64x __log2f64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Power functions.  */
#pragma empty_line
/* Return X to the Y power.  */
extern _Float64x powf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
/* Return the square root of X.  */
extern _Float64x sqrtf64x (_Float64x __x) throw (); extern _Float64x __sqrtf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return `sqrt(X*X + Y*Y)'.  */
extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the cube root of X.  */
extern _Float64x cbrtf64x (_Float64x __x) throw (); extern _Float64x __cbrtf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Nearest integer, absolute value, and remainder functions.  */
#pragma empty_line
/* Smallest integral value not less than X.  */
extern _Float64x ceilf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Absolute value of X.  */
extern _Float64x fabsf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Largest integer not greater than X.  */
extern _Float64x floorf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Floating-point modulo remainder of X/Y.  */
extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) throw ();
#pragma line 195 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return representation of qNaN for double type.  */
extern _Float64x nanf64x (const char *__tagb) throw () __attribute__ ((__const__)); extern _Float64x __nanf64x (const char *__tagb) throw () __attribute__ ((__const__));
#pragma line 216 "/usr/include/bits/mathcalls.h" 3 4
/* Bessel functions.  */
extern _Float64x j0f64x (_Float64x) throw (); extern _Float64x __j0f64x (_Float64x) throw ();
extern _Float64x j1f64x (_Float64x) throw (); extern _Float64x __j1f64x (_Float64x) throw ();
extern _Float64x jnf64x (int, _Float64x) throw (); extern _Float64x __jnf64x (int, _Float64x) throw ();
extern _Float64x y0f64x (_Float64x) throw (); extern _Float64x __y0f64x (_Float64x) throw ();
extern _Float64x y1f64x (_Float64x) throw (); extern _Float64x __y1f64x (_Float64x) throw ();
extern _Float64x ynf64x (int, _Float64x) throw (); extern _Float64x __ynf64x (int, _Float64x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Error and gamma functions.  */
extern _Float64x erff64x (_Float64x) throw (); extern _Float64x __erff64x (_Float64x) throw ();
extern _Float64x erfcf64x (_Float64x) throw (); extern _Float64x __erfcf64x (_Float64x) throw ();
extern _Float64x lgammaf64x (_Float64x) throw (); extern _Float64x __lgammaf64x (_Float64x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* True gamma function.  */
extern _Float64x tgammaf64x (_Float64x) throw (); extern _Float64x __tgammaf64x (_Float64x) throw ();
#pragma line 246 "/usr/include/bits/mathcalls.h" 3 4
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) throw (); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern _Float64x rintf64x (_Float64x __x) throw (); extern _Float64x __rintf64x (_Float64x __x) throw ();
#pragma empty_line
/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X - epsilon.  */
extern _Float64x nextdownf64x (_Float64x __x) throw (); extern _Float64x __nextdownf64x (_Float64x __x) throw ();
/* Return X + epsilon.  */
extern _Float64x nextupf64x (_Float64x __x) throw (); extern _Float64x __nextupf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return the remainder of integer divison X / Y with infinite precision.  */
extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float64x scalbnf64x (_Float64x __x, int __n) throw (); extern _Float64x __scalbnf64x (_Float64x __x, int __n) throw ();
#pragma empty_line
#pragma empty_line
/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf64x (_Float64x __x) throw (); extern int __ilogbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Like ilogb, but returning long int.  */
extern long int llogbf64x (_Float64x __x) throw (); extern long int __llogbf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return X times (2 to the Nth power).  */
extern _Float64x scalblnf64x (_Float64x __x, long int __n) throw (); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) throw ();
#pragma empty_line
/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern _Float64x nearbyintf64x (_Float64x __x) throw (); extern _Float64x __nearbyintf64x (_Float64x __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern _Float64x roundf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern _Float64x truncf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw (); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw ();
#pragma empty_line
#pragma empty_line
/* Conversion functions.  */
#pragma empty_line
/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf64x (_Float64x __x) throw (); extern long int __lrintf64x (_Float64x __x) throw ();
__extension__
extern long long int llrintf64x (_Float64x __x) throw (); extern long long int __llrintf64x (_Float64x __x) throw ();
#pragma empty_line
/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf64x (_Float64x __x) throw (); extern long int __lroundf64x (_Float64x __x) throw ();
__extension__
extern long long int llroundf64x (_Float64x __x) throw (); extern long long int __llroundf64x (_Float64x __x) throw ();
#pragma empty_line
#pragma empty_line
/* Return positive difference between X and Y.  */
extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) throw ();
#pragma empty_line
/* Return maximum numeric value from X and Y.  */
extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return minimum numeric value from X and Y.  */
extern _Float64x fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Multiply-add function computed as a ternary operation.  */
extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw (); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw ();
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Round X to nearest integer value, rounding halfway cases to even.  */
extern _Float64x roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__));
#pragma empty_line
/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ();
#pragma empty_line
#pragma empty_line
/* Return value with maximum magnitude.  */
extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Return value with minimum magnitude.  */
extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));
#pragma empty_line
/* Total order operation.  */
extern int totalorderf64x (_Float64x __x, _Float64x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Total order operation on absolute values.  */
extern int totalordermagf64x (_Float64x __x, _Float64x __y) throw ()
     __attribute__ ((__const__));
#pragma empty_line
/* Canonicalize floating-point representation.  */
extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) throw ();
#pragma empty_line
/* Get NaN payload.  */
extern _Float64x getpayloadf64x (const _Float64x *__x) throw (); extern _Float64x __getpayloadf64x (const _Float64x *__x) throw ();
#pragma empty_line
/* Set quiet NaN payload.  */
extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) throw ();
#pragma empty_line
/* Set signaling NaN payload.  */
extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) throw ();
#pragma line 458 "/usr/include/math.h" 2 3 4
#pragma line 488 "/usr/include/math.h" 3 4
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;
#pragma line 501 "/usr/include/math.h" 3 4
/* Depending on the type of TG_ARG, call an appropriately suffixed
   version of FUNC with arguments (including parentheses) ARGS.
   Suffixed functions may not exist for long double if it has the same
   format as double, or for other types with the same format as float,
   double or long double.  The behavior is undefined if the argument
   does not have a real floating type.  The definition may use a
   conditional expression, so all suffixed versions of FUNC must
   return the same type (FUNC may include a cast if necessary rather
   than being a single identifier).  */
#pragma line 565 "/usr/include/math.h" 3 4
/* ISO C99 defines some generic macros which work on any data type.  */
#pragma empty_line
#pragma empty_line
/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN =
#pragma empty_line
      0,
    FP_INFINITE =
#pragma empty_line
      1,
    FP_ZERO =
#pragma empty_line
      2,
    FP_SUBNORMAL =
#pragma empty_line
      3,
    FP_NORMAL =
#pragma empty_line
      4
  };
#pragma empty_line
/* GCC bug 66462 means we cannot use the math builtins with -fsignaling-nan,
   so disable builtins if this is enabled.  When fixed in a newer GCC,
   the __SUPPORT_SNAN__ check may be skipped for those versions.  */
#pragma empty_line
/* Return number of classification appropriate for X.  */
#pragma line 607 "/usr/include/math.h" 3 4
/* Return nonzero value if sign of X is negative.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
  /* In C++ mode, __MATH_TG cannot be used, because it relies on
     __builtin_types_compatible_p, which is a C-only builtin.
     The check for __cplusplus allows the use of the builtin instead of
     __MATH_TG. This is provided for libstdc++, only to let its configure
     test work. No further use of this definition of signbit is expected
     in C++ mode, since libstdc++ provides its own version of signbit
     in cmath (which undefines signbit). */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is not +-Inf or NaN.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is positive or negative infinity.  */
#pragma line 664 "/usr/include/math.h" 3 4
/* Bitmasks for the math_errhandling macro.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* By default all math functions support both errno and exception handling
   (except for soft floating point implementations which may only support
   errno handling).  If errno handling is disabled, exceptions are still
   supported by GLIBC.  Set math_errhandling to 0 with -ffast-math (this is
   nonconforming but it is more useful than leaving it undefined).  */
#pragma line 684 "/usr/include/math.h" 3 4
#pragma line 1 "/usr/include/bits/iscanonical.h" 1 3 4
/* Define iscanonical macro.  ldbl-96 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
#pragma empty_line
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
#pragma empty_line
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
#pragma empty_line
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __iscanonicall (long double __x)
     throw () __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is canonical.  In IEEE interchange binary
   formats, all values are canonical, but the argument must still be
   converted to its semantic type for any exceptions arising from the
   conversion, before being discarded; in extended precision, there
   are encodings that are not consistently handled as corresponding to
   any particular value of the type, and we return 0 for those.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In C++ mode, __MATH_TG cannot be used, because it relies on
   __builtin_types_compatible_p, which is a C-only builtin.  On the
   other hand, overloading provides the means to distinguish between
   the floating-point types.  The overloading resolution will match
   the correct parameter (regardless of type qualifiers (i.e.: const
   and volatile)).  */
extern "C++" {
inline int iscanonical (float __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (double __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (long double __val) { return __iscanonicall (__val); }
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 685 "/usr/include/math.h" 2 3 4
#pragma empty_line
/* Return nonzero value if X is a signaling NaN.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
   /* In C++ mode, __MATH_TG cannot be used, because it relies on
      __builtin_types_compatible_p, which is a C-only builtin.  On the
      other hand, overloading provides the means to distinguish between
      the floating-point types.  The overloading resolution will match
      the correct parameter (regardless of type qualifiers (i.e.: const
      and volatile)).  */
extern "C++" {
inline int issignaling (float __val) { return __issignalingf (__val); }
inline int issignaling (double __val) { return __issignaling (__val); }
inline int
issignaling (long double __val)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  return __issignalingl (__val);
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
} /* extern C++ */
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is subnormal.  */
#pragma empty_line
#pragma empty_line
/* Return nonzero value if X is zero.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C++" {
#pragma line 754 "/usr/include/math.h" 3 4
template <class __T> inline bool
iszero (__T __val)
{
  return __val == 0;
}
#pragma empty_line
} /* extern C++ */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* X/Open wants another strange constant.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Some useful constants.  */
#pragma line 787 "/usr/include/math.h" 3 4
/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
#pragma line 906 "/usr/include/math.h" 3 4
/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in 2.97, but not all cpus added their patterns until 3.1.  Therefore
   we enable the builtins from 3.1 onwards and use a generic implementation
   othwerwise.  */
#pragma line 950 "/usr/include/math.h" 3 4
/* Get machine-dependent inline versions (if there are any).  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Define special entry points to use when the compiler got told to
   only expect finite results.  */
#pragma line 1177 "/usr/include/math.h" 3 4
/* An expression whose type has the widest of the evaluation formats
   of X and Y (which are of floating-point types).  */
#pragma line 1189 "/usr/include/math.h" 3 4
/* Return X == Y but raising "invalid" and setting errno if X or Y is
   a NaN.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In C++ mode, __MATH_TG cannot be used, because it relies on
   __builtin_types_compatible_p, which is a C-only builtin.  Moreover,
   the comparison macros from ISO C take two floating-point arguments,
   which need not have the same type.  Choosing what underlying function
   to call requires evaluating the formats of the arguments, then
   selecting which is wider.  The macro __MATH_EVAL_FMT2 provides this
   information, however, only the type of the macro expansion is
   relevant (actually evaluating the expression would be incorrect).
   Thus, the type is used as a template parameter for __iseqsig_type,
   which calls the appropriate underlying function.  */
extern "C++" {
template<typename> struct __iseqsig_type;
#pragma empty_line
template<> struct __iseqsig_type<float>
{
  static int __call (float __x, float __y) throw ()
  {
    return __iseqsigf (__x, __y);
  }
};
#pragma empty_line
template<> struct __iseqsig_type<double>
{
  static int __call (double __x, double __y) throw ()
  {
    return __iseqsig (__x, __y);
  }
};
#pragma empty_line
template<> struct __iseqsig_type<long double>
{
  static int __call (long double __x, long double __y) throw ()
  {
#pragma empty_line
    return __iseqsigl (__x, __y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  }
};
#pragma line 1246 "/usr/include/math.h" 3 4
template<typename _T1, typename _T2>
inline int
iseqsig (_T1 __x, _T2 __y) throw ()
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef __typeof (((__x) + (__y) + 0.0f)) _T3;
#pragma empty_line
  return __iseqsig_type<_T3>::__call (__x, __y);
}
#pragma empty_line
} /* extern "C++" */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 2 "/home/sdsocuser/workspace/test/src/calcDist.cpp" 2
}
#pragma line 2 "/home/sdsocuser/workspace/test/src/calcDist.cpp"

#pragma empty_line
#pragma line 1 "/home/sdsocuser/workspace/test/src/calcDist.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma SDS data copy(data_hw[0:32768], dists_hw[0:32])
#pragma SDS data access_pattern(data_hw:SEQUENTIAL, dists_hw:SEQUENTIAL)
void calcDistancesHW(float* data_hw, float* dists_hw);
#pragma line 4 "/home/sdsocuser/workspace/test/src/calcDist.cpp" 2
#pragma empty_line
void calcDistancesHW(float* data_hw, float* dists_hw)
{
#pragma HLS LATENCY min=1
#pragma line 6 "/home/sdsocuser/workspace/test/src/calcDist.cpp"

#pragma HLS INTERFACE ap_fifo port=data_hw
#pragma line 6 "/home/sdsocuser/workspace/test/src/calcDist.cpp"

#pragma HLS INTERFACE ap_fifo port=dists_hw
#pragma line 6 "/home/sdsocuser/workspace/test/src/calcDist.cpp"

 float data_hw_tmp[1024][32];
 float movie_tmp[32];
 float dists_hw_tmp[1024];
#pragma empty_line
LOAD_DATA_HW_TMP:
 for (int i = 0; i < 1024; i++) {
  for (int j = 0; j < 32; j++) {
   data_hw_tmp[i][j] = data_hw[i * 32 + j];
  }
 }
#pragma empty_line
LOAD_MOVIE_TMP:
 for (int i = 0; i < 32; i++){
  movie_tmp[i] = data_hw_tmp[0][i];
 }
#pragma empty_line
COMPUTE_DISTS:
 for (int i = 0; i < 1024; i++) {
  float sum = 0.0, diff = 0.0;
  for (int j = 0; j < 32; j++){
   diff = data_hw_tmp[i][j] - movie_tmp[j];
   sum += diff * diff;
  }
  dists_hw_tmp[i] = sqrt(sum);
 }
#pragma empty_line
WRITE_DISTS:
 for (int i = 0; i < 1024; i++) {
  dists_hw[i] = dists_hw_tmp[i];
 }
}
