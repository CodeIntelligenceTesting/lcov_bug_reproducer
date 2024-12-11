#ifndef __LZOCONF_H_INCLUDED
#define __LZOCONF_H_INCLUDED 1
#define LZO_VERSION             0x20a0  /* 2.10 */
#define LZO_VERSION_STRING      ""
#define LZO_VERSION_DATE        ""
/* internal Autoconf configuration file - only used when building LZO */
#if defined(LZO_HAVE_CONFIG_H)
#  include <config.h>
#endif
#include <limits.h>
#include <stddef.h>
// LZO requires a conforming <limits.h>
#if !defined(CHAR_BIT) || (CHAR_BIT != 8)
#endif
#if !defined(UCHAR_MAX) || !defined(USHRT_MAX) || !defined(UINT_MAX) || !defined(ULONG_MAX)
#endif
#if (USHRT_MAX < 1) || (UINT_MAX < 1) || (ULONG_MAX < 1)
#endif
/* get OS and architecture defines */
#ifndef __LZODEFS_H_INCLUDED
#include <lzodefs.h>
#endif
#ifdef __cplusplus
extern "" {
#endif
// integral and pointer types
/* lzo_uint must match size_t */
#if !defined(LZO_UINT_MAX)
#  if (LZO_ABI_LLP64)
#    if (LZO_OS_WIN64)
typedef unsigned __int64   lzo_uint;
typedef __int64            lzo_int;
#    define LZO_TYPEOF_LZO_INT  LZO_TYPEOF___INT64
#    else
typedef lzo_ullong_t       lzo_uint;
typedef lzo_llong_t        lzo_int;
#    define LZO_TYPEOF_LZO_INT  LZO_TYPEOF_LONG_LONG
#    endif
#    define LZO_SIZEOF_LZO_INT  8
#    define LZO_UINT_MAX        0xffffffffffffffffull
#    define LZO_INT_MAX         9223372036854775807LL
#  elif (LZO_ABI_IP32L64) /* MIPS R5900 */
typedef unsigned int       lzo_uint;
typedef int                lzo_int;
#    define LZO_SIZEOF_LZO_INT  LZO_SIZEOF_INT
#    define LZO_TYPEOF_LZO_INT  LZO_TYPEOF_INT
#    define LZO_UINT_MAX        UINT_MAX
#    define LZO_INT_MAX         INT_MAX
#    define LZO_INT_MIN         INT_MIN
#  elif (ULONG_MAX >= LZO_0xffffffffL)
typedef unsigned long      lzo_uint;
typedef long               lzo_int;
#    define LZO_SIZEOF_LZO_INT  LZO_SIZEOF_LONG
#    define LZO_TYPEOF_LZO_INT  LZO_TYPEOF_LONG
#    define LZO_UINT_MAX        ULONG_MAX
#    define LZO_INT_MAX         LONG_MAX
#    define LZO_INT_MIN         LONG_MIN
#  else
#    error ""
#  endif
#endif
/* The larger type of lzo_uint and lzo_uint32_t. */
#if (LZO_SIZEOF_LZO_INT >= 4)
#  define lzo_xint              lzo_uint
#else
#  define lzo_xint              lzo_uint32_t
#endif
typedef int lzo_bool;
/* sanity checks */
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int)  == LZO_SIZEOF_LZO_INT)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == LZO_SIZEOF_LZO_INT)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_xint) >= sizeof(lzo_uint))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_xint) >= sizeof(lzo_uint32_t))
#ifndef __LZO_MMODEL
#define __LZO_MMODEL            /*empty*/
#endif
/* no typedef here because of const-pointer issues */
#define lzo_bytep               unsigned char __LZO_MMODEL *
#define lzo_charp               char __LZO_MMODEL *
#define lzo_voidp               void __LZO_MMODEL *
#define lzo_shortp              short __LZO_MMODEL *
#define lzo_ushortp             unsigned short __LZO_MMODEL *
#define lzo_intp                lzo_int __LZO_MMODEL *
#define lzo_uintp               lzo_uint __LZO_MMODEL *
#define lzo_xintp               lzo_xint __LZO_MMODEL *
#define lzo_voidpp              lzo_voidp __LZO_MMODEL *
#define lzo_bytepp              lzo_bytep __LZO_MMODEL *
#define lzo_int8_tp             lzo_int8_t __LZO_MMODEL *
#define lzo_uint8_tp            lzo_uint8_t __LZO_MMODEL *
#define lzo_int16_tp            lzo_int16_t __LZO_MMODEL *
#define lzo_uint16_tp           lzo_uint16_t __LZO_MMODEL *
#define lzo_int32_tp            lzo_int32_t __LZO_MMODEL *
#define lzo_uint32_tp           lzo_uint32_t __LZO_MMODEL *
#if defined(lzo_int64_t)
#define lzo_int64_tp            lzo_int64_t __LZO_MMODEL *
#define lzo_uint64_tp           lzo_uint64_t __LZO_MMODEL *
#endif
/* Older LZO versions used to support ancient systems and memory models
* such as 16-bit MSDOS with __huge pointers or Cray PVP, but these
* obsolete configurations are not supported any longer.
*/
#if defined(__LZO_MMODEL_HUGE)
#error """"""""
#endif
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(int) >= 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) >= 4)
/* Strange configurations where sizeof(lzo_uint) != sizeof(size_t) should
* work but have not received much testing lately, so be strict here.
*/
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(size_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(ptrdiff_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint) == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(void *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(char *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(long *)   == sizeof(lzo_uintptr_t))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(void *)   == sizeof(lzo_voidp))
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(char *)   == sizeof(lzo_bytep))
// function types
/* name mangling */
#if !defined(__LZO_EXTERN_C)
#  ifdef __cplusplus
#    define __LZO_EXTERN_C      extern ""
#  else
#    define __LZO_EXTERN_C      extern
#  endif
#endif
/* calling convention */
#if !defined(__LZO_CDECL)
#  define __LZO_CDECL           __lzo_cdecl
#endif
/* DLL export information */
#if !defined(__LZO_EXPORT1)
#  define __LZO_EXPORT1         /*empty*/
#endif
#if !defined(__LZO_EXPORT2)
#  define __LZO_EXPORT2         /*empty*/
#endif
/* __cdecl calling convention for public C and assembly functions */
#if !defined(LZO_PUBLIC)
#  define LZO_PUBLIC(r)         __LZO_EXPORT1 r __LZO_EXPORT2 __LZO_CDECL
#endif
#if !defined(LZO_EXTERN)
#  define LZO_EXTERN(r)         __LZO_EXTERN_C LZO_PUBLIC(r)
#endif
#if !defined(LZO_PRIVATE)
#  define LZO_PRIVATE(r)        static r  __LZO_CDECL
#endif
/* function types */
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
/* Callback interface. Currently only the progress indicator ("")
* is used, but this may change in a future release. */
struct lzo_callback_t;
typedef struct lzo_callback_t lzo_callback_t;
#define lzo_callback_p lzo_callback_t __LZO_MMODEL *
/* malloc & free function types */
typedef lzo_voidp (__LZO_CDECL *lzo_alloc_func_t)
(lzo_callback_p self, lzo_uint items, lzo_uint size);
typedef void      (__LZO_CDECL *lzo_free_func_t)
(lzo_callback_p self, lzo_voidp ptr);
/* a progress indicator callback function */
typedef void (__LZO_CDECL *lzo_progress_func_t)
(lzo_callback_p, lzo_uint, lzo_uint, int);
struct lzo_callback_t
{};
// error codes and prototypes
/* Error codes for the compression/decompression functions. Negative
* values are errors, positive values will be used for special but
* normal events.
*/
#define LZO_E_OK                    0
#define LZO_E_ERROR                 (-1)
#define LZO_E_OUT_OF_MEMORY         (-2)    /* [] */
#define LZO_E_NOT_COMPRESSIBLE      (-3)    /* [] */
#define LZO_E_INPUT_OVERRUN         (-4)
#define LZO_E_OUTPUT_OVERRUN        (-5)
#define LZO_E_LOOKBEHIND_OVERRUN    (-6)
#define LZO_E_EOF_NOT_FOUND         (-7)
#define LZO_E_INPUT_NOT_CONSUMED    (-8)
#define LZO_E_NOT_YET_IMPLEMENTED   (-9)    /* [] */
#define LZO_E_INVALID_ARGUMENT      (-10)
#define LZO_E_INVALID_ALIGNMENT     (-11)   /* pointer argument is not properly aligned */
#define LZO_E_OUTPUT_NOT_CONSUMED   (-12)
#define LZO_E_INTERNAL_ERROR        (-99)
#ifndef lzo_sizeof_dict_t
#  define lzo_sizeof_dict_t     ((unsigned)sizeof(lzo_bytep))
#endif
/* lzo_init() should be the first function you call.
* Check the return code !
* lzo_init() is a macro to allow checking that the library and the
* compiler's view of various types are consistent.
*/
#define lzo_init() __lzo_init_v2(LZO_VERSION,(int)sizeof(short),(int)sizeof(int),\
(int)sizeof(long),(int)sizeof(lzo_uint32_t),(int)sizeof(lzo_uint),\
(int)lzo_sizeof_dict_t,(int)sizeof(char *),(int)sizeof(lzo_voidp),\
(int)sizeof(lzo_callback_t))
LZO_EXTERN(int) __lzo_init_v2(unsigned,int,int,int,int,int,int,int,int,int);
LZO_EXTERN(const char *) lzo_version_string(void);
LZO_EXTERN(const lzo_charp) _lzo_version_string(void);
/* string functions */
LZO_EXTERN(int)
lzo_memcmp(const lzo_voidp a, const lzo_voidp b, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memcpy(lzo_voidp dst, const lzo_voidp src, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memmove(lzo_voidp dst, const lzo_voidp src, lzo_uint len);
LZO_EXTERN(lzo_voidp)
lzo_memset(lzo_voidp buf, int c, lzo_uint len);
/* checksum functions */
LZO_EXTERN(lzo_uint32_t)
lzo_adler32(lzo_uint32_t c, const lzo_bytep buf, lzo_uint len);
LZO_EXTERN(lzo_uint32_t)
lzo_crc32(lzo_uint32_t c, const lzo_bytep buf, lzo_uint len);
LZO_EXTERN(const lzo_uint32_tp)
lzo_get_crc32_table(void);
/* misc. */
LZO_EXTERN(int) _lzo_config_check(void);
typedef union {} lzo_align_t;
/* align a char pointer on a boundary that is a multiple of '''''' */
#define lzo_byte                unsigned char
/* deprecated type names */
#define lzo_int32               lzo_int32_t
#define lzo_uint32              lzo_uint32_t
#define lzo_int32p              lzo_int32_t __LZO_MMODEL *
#define lzo_uint32p             lzo_uint32_t __LZO_MMODEL *
#define LZO_INT32_MAX           LZO_INT32_C(2147483647)
#define LZO_UINT32_MAX          LZO_UINT32_C(4294967295)
#if defined(lzo_int64_t)
#define lzo_int64               lzo_int64_t
#define lzo_uint64              lzo_uint64_t
#define lzo_int64p              lzo_int64_t __LZO_MMODEL *
#define lzo_uint64p             lzo_uint64_t __LZO_MMODEL *
#define LZO_INT64_MAX           LZO_INT64_C(9223372036854775807)
#define LZO_UINT64_MAX          LZO_UINT64_C(18446744073709551615)
#endif
/* deprecated types */
typedef union {} __lzo_pu_u;
typedef union {} __lzo_pu32_u;
/* deprecated defines */
#if !defined(LZO_SIZEOF_LZO_UINT)
#  define LZO_SIZEOF_LZO_UINT   LZO_SIZEOF_LZO_INT
#endif
#ifdef __cplusplus
} /* extern "" */
#endif
#endif /* already included */
/* vim:set ts=4 sw=4 et: */