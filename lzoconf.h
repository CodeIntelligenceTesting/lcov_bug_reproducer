#ifndef __LZOCONF_H_INCLUDED
#define __LZOCONF_H_INCLUDED 1
#define LZO_VERSION             0x20a0  
#define LZO_VERSION_STRING      
#if defined(LZO_HAVE_CONFIG_H)
#  include <config.h>
#endif
#include <limits.h>
#include <stddef.h>
#if !defined(CHAR_BIT) || (CHAR_BIT != 8)
#endif
#if !defined(UCHAR_MAX) || !defined(USHRT_MAX) || !defined(UINT_MAX) || !defined(ULONG_MAX)
#endif
#if (USHRT_MAX < 1) || (UINT_MAX < 1) || (ULONG_MAX < 1)
#endif
#ifndef __LZODEFS_H_INCLUDED
#include <lzodefs.h>
#endif
#ifdef __cplusplus
extern "" {
#endif
#if !defined(LZO_UINT_MAX)
#  if (LZO_ABI_LLP64)
#    if (LZO_OS_WIN64)
typedef unsigned __int64   lzo_uint;
typedef __int64            lzo_int;
#    else
typedef lzo_ullong_t       lzo_uint;
typedef lzo_llong_t        lzo_int;
#    endif
#    define LZO_SIZEOF_LZO_INT  8
#    define LZO_INT_MAX         9223372036854775807LL
#  elif (LZO_ABI_IP32L64) 
typedef unsigned int       lzo_uint;
typedef int                lzo_int;
#    define LZO_UINT_MAX        UINT_MAX
#    define LZO_INT_MAX         INT_MAX
#    define LZO_INT_MIN         INT_MIN
#  elif (ULONG_MAX >= LZO_0xffffffffL)
typedef unsigned long      lzo_uint;
typedef long               lzo_int;
#    define LZO_SIZEOF_LZO_INT  LZO_SIZEOF_LONG
#    define LZO_UINT_MAX        ULONG_MAX
#    define LZO_INT_MAX         LONG_MAX
#    define LZO_INT_MIN         LONG_MIN
#  else
#    error ""
#  endif
#endif
#if (LZO_SIZEOF_LZO_INT >= 4)
#  define lzo_xint              lzo_uint
#endif
typedef int lzo_bool;
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int)  == LZO_SIZEOF_LZO_INT)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == LZO_SIZEOF_LZO_INT)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_xint) >= sizeof(lzo_uint))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_xint) >= sizeof(lzo_uint32_t))
#ifndef __LZO_MMODEL
#define __LZO_MMODEL            
#endif
#define lzo_bytep               unsigned char __LZO_MMODEL *
#define lzo_charp               char __LZO_MMODEL *
#define lzo_voidp               void __LZO_MMODEL *
#define lzo_shortp              short __LZO_MMODEL *
#define lzo_ushortp             unsigned short __LZO_MMODEL *
#define lzo_uintp               lzo_uint __LZO_MMODEL *
#define lzo_xintp               lzo_xint __LZO_MMODEL *
#define lzo_voidpp              lzo_voidp __LZO_MMODEL *
#define lzo_bytepp              lzo_bytep __LZO_MMODEL *
#define lzo_uint8_tp            lzo_uint8_t __LZO_MMODEL *
#define lzo_int16_tp            lzo_int16_t __LZO_MMODEL *
#define lzo_int32_tp            lzo_int32_t __LZO_MMODEL *
#define lzo_uint32_tp           lzo_uint32_t __LZO_MMODEL *
#if defined(lzo_int64_t)
#define lzo_int64_tp            lzo_int64_t __LZO_MMODEL *
#define lzo_uint64_tp           lzo_uint64_t __LZO_MMODEL *
#endif
#if defined(__LZO_MMODEL_HUGE)
#error 
#endif
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(int) >= 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) >= 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(size_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(ptrdiff_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(void *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(char *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(long *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(void *)   == sizeof(lzo_voidp))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(char *)   == sizeof(lzo_bytep))
#if !defined(__LZO_EXTERN_C)
#  ifdef __cplusplus
#    define __LZO_EXTERN_C      extern ""
#  else
#    define __LZO_EXTERN_C      extern
#  endif
#endif
#if !defined(__LZO_CDECL)
#  define __LZO_CDECL           __lzo_cdecl
#endif
#if !defined(__LZO_EXPORT1)
#  define __LZO_EXPORT1         
#endif
#if !defined(__LZO_EXPORT2)
#  define __LZO_EXPORT2         
#endif
#if !defined(LZO_PUBLIC)
#  define LZO_PUBLIC(r)         __LZO_EXPORT1 r __LZO_EXPORT2 __LZO_CDECL
#endif
#if !defined(LZO_EXTERN)
#  define LZO_EXTERN(r)         __LZO_EXTERN_C LZO_PUBLIC(r)
#endif
#if !defined(LZO_PRIVATE)
#  define LZO_PRIVATE(r)        static r  __LZO_CDECL
#endif
typedef int
(__LZO_CDECL *lzo_compress_t)   ( const lzo_bytep src, lzo_uint  src_len,
lzo_voidp wrkmem );
typedef int
(__LZO_CDECL *lzo_decompress_t) ( const lzo_bytep src, lzo_uint  src_len,
lzo_voidp wrkmem );
typedef int
(__LZO_CDECL *lzo_optimize_t)   (       lzo_bytep src, lzo_uint  src_len,
lzo_voidp wrkmem );
typedef int
(__LZO_CDECL *lzo_compress_dict_t)(const lzo_bytep src, lzo_uint  src_len,
const lzo_bytep dict, lzo_uint dict_len );
typedef int
(__LZO_CDECL *lzo_decompress_dict_t)(const lzo_bytep src, lzo_uint  src_len,
const lzo_bytep dict, lzo_uint dict_len );
struct lzo_callback_t;
typedef struct lzo_callback_t lzo_callback_t;
#define lzo_callback_p lzo_callback_t __LZO_MMODEL *
typedef lzo_voidp (__LZO_CDECL *lzo_alloc_func_t)
(lzo_callback_p self, lzo_uint items, lzo_uint size);
typedef void      (__LZO_CDECL *lzo_free_func_t)
(lzo_callback_p self, lzo_voidp ptr);
typedef void (__LZO_CDECL *lzo_progress_func_t)
(lzo_callback_p, lzo_uint, lzo_uint, int);
struct lzo_callback_t
{};
#define LZO_E_OK                    0
#define LZO_E_ERROR    (-1)
#define LZO_E_OUT_OF_MEMORY         (-2)    
#define LZO_E_NOT_COMPRESSIBLE      (-3)    
#define LZO_E_INPUT_OVERRUN         (-4)
#define LZO_E_OUTPUT_OVERRUN        (-5)
#define LZO_E_LOOKBEHIND_OVERRUN    (-6)
#define LZO_E_EOF_NOT_FOUND         (-7)
#define LZO_E_INPUT_NOT_CONSUMED    (-8)
#define LZO_E_INVALID_ARGUMENT      (-10)
#define LZO_E_INVALID_ALIGNMENT     (-11)   
#define LZO_E_OUTPUT_NOT_CONSUMED   (-12)
#define LZO_E_INTERNAL_ERROR        (-99)
#ifndef lzo_sizeof_dict_t
#  define lzo_sizeof_dict_t     ((unsigned)sizeof(lzo_bytep))
#endif
#define lzo_init() __lzo_init_v2(LZO_VERSION,(int)sizeof(short),(int)sizeof(int),\
(int)sizeof(long),(int)sizeof(lzo_uint32_t),(int)sizeof(lzo_uint),\
(int)lzo_sizeof_dict_t,(int)sizeof(char *),(int)sizeof(lzo_voidp),\
(int)sizeof(lzo_callback_t))
LZO_EXTERN(int) __lzo_init_v2(unsigned,int,int,int,int,int,int,int,int,int);
LZO_EXTERN(const char *) lzo_version_string(void);
LZO_EXTERN(const lzo_charp) _lzo_version_string(void);
LZO_EXTERN(int)
lzo_memcmp(const lzo_voidp a, const lzo_voidp b, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memcpy(lzo_voidp dst, const lzo_voidp src, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memmove(lzo_voidp dst, const lzo_voidp src, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memset(lzo_voidp buf, int c, lzo_uint len);
LZO_EXTERN(lzo_uint32_t)
lzo_adler32(lzo_uint32_t c, const lzo_bytep buf, lzo_uint len);
LZO_EXTERN(lzo_uint32_t)
lzo_crc32(lzo_uint32_t c, const lzo_bytep buf, lzo_uint len);
LZO_EXTERN(const lzo_uint32_tp)
lzo_get_crc32_table(void);
LZO_EXTERN(int) _lzo_config_check(void);
typedef union {} lzo_align_t;
#define lzo_int32               lzo_int32_t
#define lzo_int32p              lzo_int32_t __LZO_MMODEL *
#define lzo_uint32p             lzo_uint32_t __LZO_MMODEL *
#define LZO_INT32_MAX           LZO_INT32_C(2147483647)
#define LZO_UINT32_MAX          LZO_UINT32_C(4294967295)
#if defined(lzo_int64_t)
#define lzo_int64               lzo_int64_t
#define lzo_uint64              lzo_uint64_t
#define lzo_int64plzo_int64_t __LZO_MMODEL *
#define lzo_uint64p             lzo_uint64_t __LZO_MMODEL *
#define LZO_UINT64_MAX          LZO_UINT64_C(18446744073709551615)
#endif
typedef union {} __lzo_pu_u;
typedef union {} __lzo_pu32_u;
#if !defined(LZO_SIZEOF_LZO_UINT)
#  define LZO_SIZEOF_LZO_UINT   LZO_SIZEOF_LZO_INT
#endif
#ifdef __cplusplus
} 
#endif
#endif 