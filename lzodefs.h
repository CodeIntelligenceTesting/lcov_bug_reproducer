#ifndef __LZODEFS_H_INCLUDED
#define __LZODEFS_H_INCLUDED 1
#if defined(__CYGWIN32__) && !defined(__CYGWIN__)
#  define __CYGWIN__ __CYGWIN32__
#endif
#if 1 && defined(__INTERIX) && defined(__GNUC__) && !defined(_ALL_SOURCE)
#  define _ALL_SOURCE 1
#endif
#if defined(__mips__) && defined(__R5900__)
#  if !defined(__LONG_MAX__)
#    define __LONG_MAX__ 9223372036854775807L
#  endif
#endif
#if 0

#if (defined(__clang__) || defined(__GNUC__)) && defined(__ASSEMBLER__)
#  if (__ASSEMBLER__+0) <= 0
#  else

#  endif
#elif defined(__cplusplus)
#  if (__cplusplus+0) <= 0
#  elif (__cplusplus < 199711L)
#    define LZO_LANG_CXX        1
#  elif defined(_MSC_VER) && defined(_MSVC_LANG) && (_MSVC_LANG+0 >= 201402L) && 1
#    define LZO_LANG_CXX        _MSVC_LANG
#  else
#    define LZO_LANG_CXX        __cplusplus
#  endif
#  define LZO_LANG_CPLUSPLUS    LZO_LANG_CXX
#else
#  if defined(__STDC_VERSION__) && (__STDC_VERSION__+0 >= 199409L)
#    define LZO_LANG_C          __STDC_VERSION__
#  else
#    define LZO_LANG_C          1
#  endif
#endif
#endif
#if !defined(LZO_CFG_NO_DISABLE_WUNDEF)
#if defined(__ARMCC_VERSION)
#  pragma diag_suppress 193
#elif defined(__clang__) && defined(__clang_minor__)
#  pragma clang diagnostic ignored ""
#elif defined(__INTEL_COMPILER)
#  pragma warning(disable: 193)
#elif defined(__KEIL__) && defined(__C166__)
#  pragma warning disable = 322
#  if ((__GNUC__-0) >= 5 || ((__GNUC__-0) == 4 && (__GNUC_MINOR__-0) >= 2))
#    pragma GCC diagnostic ignored ""
#  endif
#  if ((_MSC_VER-0) >= 1300)

#  endif
#endif
#endif
#if 0 && defined(__POCC__) && defined(_WIN32)
#  if (__POCC__ >= 400)
#    pragma warn(disable: 2216)
#  endif
#endif
#if 0 && defined(__WATCOMC__)
#  if (__WATCOMC__ >= 1050) && (__WATCOMC__ < 1060)
#    pragma warning 203 9
#  endif
#endif
#if defined(__BORLANDC__) && defined(__MSDOS__) && !defined(__FLAT__)
#  pragma option -h
#endif
#if !(LZO_CFG_NO_DISABLE_WCRTNONSTDC)
#ifndef _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE 1
#endif
#ifndef _CRT_NONSTDC_NO_WARNINGS

#endif
#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS 1
#endif
#endif
#if 0
#define LZO_0xffffUL 0xfffful
#define LZO_0xffffffffUL        0xfffffffful
#else
#define LZO_0xffffUL 65535ul
#define LZO_0xffffffffUL        4294967295ul
#endif
#define LZO_0xffffL   LZO_0xffffUL
#define LZO_0xffffffffL         LZO_0xffffffffUL
#if (LZO_0xffffL == LZO_0xffffffffL)
#endif
#if 0
#if (32767 >= 4294967295ul)
#endif
#endif
#if defined(__WATCOMC__) && (__WATCOMC__ < 900)
#endif
#if defined(_CRAY) && defined(_CRAY1)
#  define LZO_BROKEN_SIGNED_RIGHT_SHIFT 1
#endif
#define LZO_PP_STRINGIZE(x)             #x
#define LZO_PP_CONCAT0()  /*empty*/
#define LZO_PP_CONCAT1(a)a
#define LZO_PP_CONCAT2(a,b)a ## b
#define LZO_PP_CONCAT6(a,b,c,d,e,f)     a ## b ## c ## d ## e ## f
#define LZO_PP_ECONCAT1(a)   LZO_PP_CONCAT1(a)
#define LZO_PP_ECONCAT2(a,b) LZO_PP_CONCAT2(a,b)
#define LZO_PP_ECONCAT6(a,b,c,d,e,f)    LZO_PP_CONCAT6(a,b,c,d,e,f)
#define LZO_PP_EMPTY  /*empty*/
#define LZO_PP_EMPTY0()/*empty*/

#define LZO_PP_EMPTY2(a,b) /*empty*/

#define LZO_PP_EMPTY4(a,b,c,d)/*empty*/
#define LZO_PP_EMPTY5(a,b,c,d,e)        /*empty*/
#define LZO_PP_EMPTY6(a,b,c,d,e,f)      /*empty*/
#define LZO_PP_EMPTY7(a,b,c,d,e,f,g)    /*empty*/
#if 1
#define LZO_CPP_STRINGIZE(x)            #x
#define LZO_CPP_CONCAT2(a,b) a ## b
#define LZO_CPP_CONCAT3(a,b,c)          a ## b ## c
#define LZO_CPP_CONCAT6(a,b,c,d,e,f)    a ## b ## c ## d ## e ## f
#define LZO_CPP_ECONCAT4(a,b,c,d)       LZO_CPP_CONCAT4(a,b,c,d)
#define LZO_CPP_ECONCAT5(a,b,c,d,e)     LZO_CPP_CONCAT5(a,b,c,d,e)
#define LZO_CPP_ECONCAT6(a,b,c,d,e,f)   LZO_CPP_CONCAT6(a,b,c,d,e,f)
#endif
#if 1 && defined(__cplusplus)
#  if !defined(__STDC_CONSTANT_MACROS)
#    define __STDC_CONSTANT_MACROS 1
#  endif
#  if !defined(__STDC_LIMIT_MACROS)
#    define __STDC_LIMIT_MACROS 1
#  endif
#endif
#if defined(__cplusplus)
#  define LZO_EXTERN_C          extern """" {}
#else

#  define LZO_EXTERN_C_BEGIN    /*empty*/
#  define LZO_EXTERN_C_END      /*empty*/
#endif
#if !defined(__LZO_OS_OVERRIDE)
#if (LZO_OS_FREESTANDING)
#elif (LZO_OS_EMBEDDED)
#  define LZO_INFO_OS""""
#elif defined(__CYGWIN__) && defined(__GNUC__)
#  define LZO_OS_CYGWIN         1
#elif defined(__BEOS__)
#  define LZO_OS_BEOS1
#elif defined(__OS400__)
#  define LZO_OS_OS400          1
#endif
#endif
#if (LZO_OS_DOS16 || LZO_OS_OS216 || LZO_OS_WIN16)
#  if (UINT_MAX != LZO_0xffffL)
#  endif
#  if (ULONG_MAX != LZO_0xffffffffL)
#  endif
#  if (ULONG_MAX != LZO_0xffffffffL)
#  endif
#endif
#if defined(CIL) && defined(_GNUCC) && defined(__GNUC__)

#  if defined(__CILLY__)
#  else

#  endif
#  define LZO_CC_SDCC1


#  define LZO_INFO_CCVER        __PATHSCALE__
#  if defined(__GNUC__) && defined(__GNUC_MINOR__) && defined(__VERSION__)
#  endif
#  define LZO_CC_INTELC         __INTEL_COMPILER
#  define LZO_INFO_CCVER        LZO_PP_MACRO_EXPAND(__INTEL_COMPILER)
#  if defined(_MSC_VER) && ((_MSC_VER-0) > 0)
#    define LZO_CC_INTELC_MSC   _MSC_VER
#  endif

#  define LZO_CC_PELLESC        1

#  if defined(__GNUC_PATCHLEVEL__)
#  else
#    define LZO_CC_ARMCC_GNUC   (__GNUC__ * 0x10000L + (__GNUC_MINOR__-0) * 0x100)
#  endif
#  define LZO_CC_ARMCC__ARMCC_VERSION
#  define LZO_INFO_CCVER        __VERSION__
#  define LZO_CC_CLANG_C2       _MSC_VER
#  define LZO_CC_CLANG_VENDOR_MICROSOFT 1
#  define LZO_INFO_CCVER        LZO_PP_MACRO_EXPAND(__c2_version__)
#elif defined(__clang__) && defined(__llvm__) && defined(__VERSION__)
#  if defined(__clang_major__) && defined(__clang_minor__) && defined(__clang_patchlevel__)
#    define LZO_CC_CLANG        (__clang_major__ * 0x10000L + (__clang_minor__-0) * 0x100 + (__clang_patchlevel__-0))
#  else
#    define LZO_CC_CLANG        0x010000L
#  endif
#  if defined(_MSC_VER) && ((_MSC_VER-0) > 0)
#    define LZO_CC_CLANG_MSC    _MSC_VER
#  endif
#  if defined(__APPLE_CC__)

#    define LZO_INFO_CC         """"
#  endif
#  if defined(__clang_version__)
#    define LZO_INFO_CCVER      __clang_version__
#  else
#    define LZO_INFO_CCVER      __VERSION__
#  endif
#  if defined(__GNUC_PATCHLEVEL__)
#  else
#  endif
#  define LZO_CC_LLVM           LZO_CC_LLVM_GNUC
#elif defined(__TURBOC__)
#  define lzo_has_feature(x)        0
#endif
#if !defined(lzo_has_extension)
#if (LZO_CC_CLANG) && defined(__has_extension)
#  define lzo_has_extension         __has_extension
#elif (LZO_CC_CLANG) && defined(__has_feature)
#  define lzo_has_extension         __has_feature
#endif
#endif
#if !defined(lzo_has_extension)
#  define lzo_has_extension(x)      0
#endif
#if !defined(LZO_CFG_USE_NEW_STYLE_CASTS) && defined(__cplusplus) && 0
#  if (LZO_CC_GNUC && (LZO_CC_GNUC < 0x020800ul))
#  else
#    define LZO_CFG_USE_NEW_STYLE_CASTS 1
#  endif
#endif
#if !defined(LZO_CFG_USE_NEW_STYLE_CASTS)
#endif
#if !defined(__cplusplus)
#  if defined(LZO_CFG_USE_NEW_STYLE_CASTS)

#  endif
#endif
#if !defined(LZO_REINTERPRET_CAST)
#  if (LZO_CFG_USE_NEW_STYLE_CASTS)
#  endif
#endif
#if !defined(LZO_REINTERPRET_CAST)

#endif
#if !defined(LZO_STATIC_CAST)
#  if (LZO_CFG_USE_NEW_STYLE_CASTS)

#  endif
#endif
#if !defined(LZO_STATIC_CAST)

#endif
#if !defined(LZO_STATIC_CAST2)
#endif
#if !defined(LZO_UNCONST_CAST)
#  if (LZO_CFG_USE_NEW_STYLE_CASTS)
#  elif (LZO_HAVE_MM_HUGE_PTR)

#  endif
#endif
#if !defined(LZO_UNCONST_CAST)
#  define LZO_UNCONST_CAST(t,e)             ((t) ((void *) ((const void *) (e))))
#endif
#if !defined(LZO_UNCONST_VOLATILE_CAST)
#  if (LZO_CFG_USE_NEW_STYLE_CASTS)
#  define __LZO_CTA_NAME(a)         LZO_PP_ECONCAT2(a,__COUNTER__)
#else
#  define __LZO_CTA_NAME(a)         LZO_PP_ECONCAT2(a,__LINE__)
#endif
#endif
#if !defined(LZO_COMPILE_TIME_ASSERT_HEADER)
#  if (LZO_CC_AZTECC || LZO_CC_ZORTECHC)
#  elif (LZO_CC_DMC || LZO_CC_SYMANTECC)
#  else
#    define LZO_COMPILE_TIME_ASSERT_HEADER(e)  LZO_EXTERN_C_BEGIN extern int __LZO_CTA_NAME(lzo_cta__)[]; LZO_EXTERN_C_END
#  endif
#endif
#if !defined(LZO_COMPILE_TIME_ASSERT)
#  if (LZO_CC_AZTECC)
#  elif (LZO_CC_CLANG && (LZO_CC_CLANG >= 0x030000ul))
#    define LZO_COMPILE_TIME_ASSERT(e)  {}
#  elif (LZO_CC_DMC || LZO_CC_PACIFICC || LZO_CC_SYMANTECC || LZO_CC_ZORTECHC)

#  elif (LZO_CC_MSC && (_MSC_VER < 900))
#  else
#  endif
#endif
#if (LZO_LANG_ASSEMBLER)
#  undef LZO_COMPILE_TIME_ASSERT_HEADER
#else
LZO_COMPILE_TIME_ASSERT_HEADER(1 == 1)
#if defined(__cplusplus)
extern "" {}
#endif
LZO_COMPILE_TIME_ASSERT_HEADER(3 == 3)
#endif
#if (LZO_ARCH_I086 || LZO_ARCH_I386) && (LZO_OS_DOS16 || LZO_OS_DOS32 || LZO_OS_OS2 || LZO_OS_OS216 || LZO_OS_WIN16 || LZO_OS_WIN32 || LZO_OS_WIN64)
#  if (LZO_CC_GNUC || LZO_CC_HIGHC || LZO_CC_NDPC || LZO_CC_PACIFICC)

#    define __lzo_cdecl_atexit          /*empty*/
#    if (LZO_OS_OS2 && (LZO_CC_DMC || LZO_CC_SYMANTECC))
#      define __lzo_cdecl_qsort         __pascal

#      define __lzo_cdecl_qsort         _stdcall
#      define __lzo_cdecl_qsort         __cdecl
#    endif
#  elif (LZO_CC_WATCOMC)
#    define __lzo_cdecl __cdecl
#  else
#    define __lzo_cdecl_atexit          __cdecl
#    define __lzo_cdecl_qsort__cdecl
#  endif
#  if (LZO_CC_GNUC || LZO_CC_HIGHC || LZO_CC_NDPC || LZO_CC_PACIFICC || LZO_CC_WATCOMC)
#    define __lzo_cdecl_sighandler      __pascal
#  elif (LZO_OS_OS2 && (LZO_CC_ZORTECHC))
#    define __lzo_cdecl_sighandler      _stdcall
#    define __lzo_cdecl_sighandler      __clrcall
#    if defined(_DLL)
#    elif defined(_MT)
#    endif
#  else
#    define __lzo_cdecl_sighandler      __cdecl
#  endif

#  define __lzo_cdecl   __cdecl
#  define __lzo_cdecl  cdecl
#endif
#if !defined(__lzo_cdecl)
#  define __lzo_cdecl/*empty*/
#endif
#if !defined(__lzo_cdecl_atexit)

#endif
#if !defined(__lzo_cdecl_main)
#  define __lzo_cdecl_main/*empty*/
#endif
#if !defined(__lzo_cdecl_qsort)
#  define __lzo_cdecl_qsort             /*empty*/
#endif
#if !defined(__lzo_cdecl_sighandler)
#endif
#if !defined(__lzo_cdecl_va)
#  define __lzo_cdecl_va  __lzo_cdecl
#endif
#if !(LZO_CFG_NO_WINDOWS_H)
#if !defined(LZO_HAVE_WINDOWS_H)
#if (LZO_OS_CYGWIN || (LZO_OS_EMX && defined(__RSXNT__)) || LZO_OS_WIN32 || LZO_OS_WIN64)
#  if (LZO_CC_WATCOMC && (__WATCOMC__ < 1000))
#  else
#    define LZO_HAVE_WINDOWS_H 1
#  endif
#endif
#endif
#endif
#define LZO_SIZEOF_CHAR  1
#ifndef LZO_SIZEOF_SHORT
#if defined(SIZEOF_SHORT)
#elif defined(__SIZEOF_SHORT__)
#endif
#endif
#ifndef LZO_SIZEOF_INT
#if defined(SIZEOF_INT)

#elif defined(__SIZEOF_INT__)
#  define LZO_SIZEOF_INT (__SIZEOF_INT__)
#endif
#endif
#ifndef LZO_SIZEOF_LONG
#if defined(SIZEOF_LONG)
#  define LZO_SIZEOF_LONG           (SIZEOF_LONG)
#elif defined(__SIZEOF_LONG__)
#endif
#endif
#ifndef LZO_SIZEOF_LONG_LONG
#if defined(SIZEOF_LONG_LONG)
#elif defined(__SIZEOF_LONG_LONG__)
#  define LZO_SIZEOF_LONG_LONG      (__SIZEOF_LONG_LONG__)
#endif
#endif
#ifndef LZO_SIZEOF___INT16
#if defined(SIZEOF___INT16)

#endif
#endif
#ifndef LZO_SIZEOF___INT32
#if defined(SIZEOF___INT32)

#endif
#endif
#ifndef LZO_SIZEOF___INT64
#if defined(SIZEOF___INT64)
#endif
#endif
#ifndef LZO_SIZEOF_VOID_P
#if defined(SIZEOF_VOID_P)



#endif
#endif
#ifndef LZO_SIZEOF_SIZE_T
#if defined(SIZEOF_SIZE_T)
#  define LZO_SIZEOF_SIZE_T         (SIZEOF_SIZE_T)
#elif defined(__SIZEOF_SIZE_T__)
#  define LZO_SIZEOF_SIZE_T         (__SIZEOF_SIZE_T__)
#endif
#endif
#ifndef LZO_SIZEOF_PTRDIFF_T
#if defined(SIZEOF_PTRDIFF_T)
#elif defined(__SIZEOF_PTRDIFF_T__)
#  define LZO_SIZEOF_PTRDIFF_T      (__SIZEOF_PTRDIFF_T__)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int16e_t) == 2)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int16e_t) == LZO_SIZEOF_LZO_INT16E_T)
#endif
#if !defined(lzo_int32e_t)
#if (LZO_CFG_PREFER_TYPEOF_ACC_INT32E_T == LZO_TYPEOF_INT) && (LZO_SIZEOF_INT != 4)
#  undef LZO_CFG_PREFER_TYPEOF_ACC_INT32E_T
#endif
#if (LZO_SIZEOF_LONG == 4) && !(LZO_CFG_PREFER_TYPEOF_ACC_INT32E_T == LZO_TYPEOF_INT)
#  define lzo_int32e_tlong int
#  define LZO_TYPEOF_LZO_INT32E_T   LZO_TYPEOF_LONG
#elif (LZO_SIZEOF_INT == 4)
#  define lzo_int32e_t int
#  define lzo_uint32e_t  unsigned int
#elif (LZO_SIZEOF_SHORT == 4)
#  define lzo_int32e_t              short int
#  define LZO_TYPEOF_LZO_INT32E_T   LZO_TYPEOF_SHORT
#elif (LZO_SIZEOF_LONG_LONG == 4)
#  define lzo_int32e_t lzo_llong_t
#  define lzo_uint32e_tlzo_ullong_t
#  define LZO_TYPEOF_LZO_INT32E_T   LZO_TYPEOF_LONG_LONG
#  if !(LZO_LANG_ASSEMBLER)
#  endif
#  if !(LZO_LANG_ASSEMBLER)
#  endif
#  define LZO_INT32_C(c)            (c##LL)
#  define LZO_UINT32_C(c)           (c##ULL)

#elif (LZO_SIZEOF___INT32 == 4)
#  define lzo_int32e_t__int32
#  define LZO_TYPEOF_LZO_INTPTR_T   LZO_TYPEOF_INT
#  define lzo_intptr_t    short
#  define LZO_SIZEOF_LZO_INTPTR_T   LZO_SIZEOF_SHORT

#  define lzo_intptr_tint

#elif (LZO_SIZEOF_LONG >= LZO_SIZEOF_VOID_P)
#  define lzo_intptr_tlong
#  define lzo_uintptr_t             unsigned long
#  define LZO_SIZEOF_LZO_INTPTR_T   LZO_SIZEOF_LONG
#  define LZO_TYPEOF_LZO_INTPTR_T   LZO_TYPEOF_LONG
#  define lzo_intptr_t              lzo_int64l_t
#  define lzo_uintptr_t             lzo_uint64l_t
#  define LZO_TYPEOF_LZO_INTPTR_T   LZO_TYPEOF_LZO_INT64L_T
#else
#endif
#endif
#if 1
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_intptr_t) >= sizeof(void *))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_intptr_t) == sizeof(lzo_uintptr_t))
#endif
#if !defined(lzo_word_t)
#if defined(LZO_WORDSIZE) && (LZO_WORDSIZE+0 > 0)
#if (LZO_WORDSIZE == LZO_SIZEOF_LZO_INTPTR_T) && !(__LZO_INTPTR_T_IS_POINTER)

#  define lzo_sword_t lzo_intptr_t
#  define LZO_SIZEOF_LZO_WORD_T     LZO_SIZEOF_LZO_INTPTR_T

#  define lzo_word_t  unsigned long
#  define lzo_sword_t long
#  define LZO_SIZEOF_LZO_WORD_T     LZO_SIZEOF_LONG
#  define LZO_TYPEOF_LZO_WORD_T     LZO_TYPEOF_LONG

#  define lzo_word_t unsigned int
#  define lzo_sword_tint
#  define LZO_SIZEOF_LZO_WORD_T     LZO_SIZEOF_INT
#elif (LZO_WORDSIZE == LZO_SIZEOF_SHORT)
#  define lzo_sword_t short
#elif (LZO_WORDSIZE == 1)

#  define lzo_sword_t signed char
#  define LZO_SIZEOF_LZO_WORD_T     1
#  define LZO_TYPEOF_LZO_WORD_T     LZO_TYPEOF_CHAR
#elif (LZO_WORDSIZE == LZO_SIZEOF_LZO_INT64L_T)
#  define lzo_word_t  lzo_uint64l_t
#  define lzo_sword_t lzo_int64l_t
#elif (LZO_ARCH_SPU) && (LZO_CC_GNUC)
#if 0
#  if !(LZO_LANG_ASSEMBLER)
typedef unsigned lzo_word_t  __attribute__((__mode__(__V16QI__)));
typedef int      lzo_sword_t __attribute__((__mode__(__V16QI__)));
#  endif



#  define LZO_TYPEOF_LZO_WORD_T     LZO_TYPEOF___MODE_V16QI
#endif
#else
#  error ""
#endif
#endif
#endif
#if 1 && defined(lzo_word_t)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_word_t)  == LZO_WORDSIZE)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_sword_t) == LZO_WORDSIZE)
#endif
#if 1
#define lzo_int8_t signed char

#define LZO_SIZEOF_LZO_INT8_T       1
#define LZO_TYPEOF_LZO_INT8_T       LZO_TYPEOF_CHAR
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int8_t) == 1)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int8_t) == sizeof(lzo_uint8_t))
#endif
#if defined(lzo_int16e_t)
#define lzo_int16_t  lzo_int16e_t
#define lzo_uint16_tlzo_uint16e_t
#define LZO_SIZEOF_LZO_INT16_T      LZO_SIZEOF_LZO_INT16E_T

LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int16_t) == 2)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int16_t) == sizeof(lzo_uint16_t))
#endif
#if defined(lzo_int32e_t)
#define lzo_int32_t lzo_int32e_t
#define lzo_uint32_t lzo_uint32e_t
#define LZO_SIZEOF_LZO_INT32_T      LZO_SIZEOF_LZO_INT32E_T
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int32_t) == 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int32_t) == sizeof(lzo_uint32_t))
#endif
#if defined(lzo_int64e_t)
#define lzo_int64_t lzo_int64e_t
#define lzo_uint64_t lzo_uint64e_t
#define LZO_SIZEOF_LZO_INT64_T      LZO_SIZEOF_LZO_INT64E_T
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int64_t) == 8)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int64_t) == sizeof(lzo_uint64_t))
#endif
#if 1
#define lzo_int_least32_t           lzo_int32l_t
#define lzo_uint_least32_t          lzo_uint32l_t
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_least32_t) >= 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_least32_t) == sizeof(lzo_uint_least32_t))
#endif
#if defined(lzo_int64l_t)
#define lzo_int_least64_tlzo_int64l_t
#define lzo_uint_least64_t          lzo_uint64l_t
#define LZO_TYPEOF_LZO_INT_LEAST64_T LZO_TYPEOF_LZO_INT64L_T
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_least64_t) >= 8)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_least64_t) == sizeof(lzo_uint_least64_t))
#endif
#if 1
#define lzo_int_fast32_t           lzo_int32f_t
#define lzo_uint_fast32_t          lzo_uint32f_t
#define LZO_TYPEOF_LZO_INT_FAST32_T LZO_TYPEOF_LZO_INT32F_T
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_fast32_t) >= 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_fast32_t) == sizeof(lzo_uint_fast32_t))
#endif
#if defined(lzo_int64f_t)
#define lzo_int_fast64_t           lzo_int64f_t
#define lzo_uint_fast64_t          lzo_uint64f_t
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_fast64_t) >= 8)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int_fast64_t) == sizeof(lzo_uint_fast64_t))
#endif
#if !defined(LZO_INT16_C)
#  if (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_INT >= 2)
#    define LZO_INT16_C(c)          ((c) + 0)
#    define LZO_UINT16_C(c)         ((c) + 0U)
#  elif (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_LONG >= 2)
#    define LZO_INT16_C(c)          ((c) + 0L)
#    define LZO_UINT16_C(c)         ((c) + 0UL)
#  elif (LZO_SIZEOF_INT >= 2)
#    define LZO_INT16_C(c)          (c)
#    define LZO_UINT16_C(c)         (c##U)
#  elif (LZO_SIZEOF_LONG >= 2)
#    define LZO_INT16_C(c)          (c##L)
#    define LZO_UINT16_C(c)         (c##UL)
#  else
#  endif
#endif
#if !defined(LZO_INT32_C)
#  if (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_INT >= 4)
#    define LZO_INT32_C(c)          ((c) + 0)
#    define LZO_UINT32_C(c)         ((c) + 0U)
#  elif (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_LONG >= 4)
#    define LZO_INT32_C(c)          ((c) + 0L)
#    define LZO_UINT32_C(c)         ((c) + 0UL)
#  elif (LZO_SIZEOF_INT >= 4)

#    define LZO_UINT32_C(c)         (c##U)
#  elif (LZO_SIZEOF_LONG >= 4)
#    define LZO_INT32_C(c)          (c##L)
#    define LZO_UINT32_C(c)         (c##UL)
#  elif (LZO_SIZEOF_LONG_LONG >= 4)
#    define LZO_INT32_C(c)          (c##LL)
#    define LZO_UINT32_C(c)         (c##ULL)
#  else
#  endif
#endif
#if !defined(LZO_INT64_C) && defined(lzo_int64l_t)
#  if (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_INT >= 8)
#    define LZO_INT64_C(c)          ((c) + 0)
#    define LZO_UINT64_C(c)         ((c) + 0U)
#  elif (LZO_BROKEN_INTEGRAL_CONSTANTS) && (LZO_SIZEOF_LONG >= 8)
#    define LZO_INT64_C(c)          ((c) + 0L)
#    define LZO_UINT64_C(c)         ((c) + 0UL)
#  elif (LZO_SIZEOF_INT >= 8)
#    define LZO_INT64_C(c)          (c)
#    define LZO_UINT64_C(c)         (c##U)
#  elif (LZO_SIZEOF_LONG >= 8)
#    define LZO_INT64_C(c)(c##L)
#    define LZO_UINT64_C(c)         (c##UL)
#  else
#  endif
#endif
#endif
#endif /* already included */
/* vim:set ts=4 sw=4 et: */