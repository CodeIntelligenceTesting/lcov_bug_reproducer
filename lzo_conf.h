#ifndef __LZO_CONF_H
#define __LZO_CONF_H 1
#if !defined(__LZO_IN_MINILZO)
#if defined(LZO_CFG_FREESTANDING) && (LZO_CFG_FREESTANDING)
#  define LZO_LIBC_FREESTANDING 1
#  define LZO_OS_FREESTANDING 1
#endif
#if defined(LZO_CFG_EXTRA_CONFIG_HEADER)
#  include LZO_CFG_EXTRA_CONFIG_HEADER
#endif
#if defined(__LZOCONF_H) || defined(__LZOCONF_H_INCLUDED)
#  error """"))) */
/* #define __LZO_EXPORT1 __declspec(dllexport) */
#endif
#include <lzoconf.h>
#if defined(LZO_CFG_EXTRA_CONFIG_HEADER2)
#  include LZO_CFG_EXTRA_CONFIG_HEADER2
#endif
#endif /* !defined(__LZO_IN_MINILZO) */
#if !defined(__LZOCONF_H_INCLUDED) || (LZO_VERSION+0 != 0x20a0)
#  error """" warnings */
#  pragma warning(disable: 4702)
#endif
#if (LZO_CC_MSC && (_MSC_VER >= 1000))
#  pragma warning(disable: 4127 4701)
/* disable warnings about inlining */
#  pragma warning(disable: 4514 4710 4711)
#endif
#if (LZO_CC_MSC && (_MSC_VER >= 1300))
/* disable '''' warnings in system header files */
#  pragma warning(disable: 4746)
#endif
#if (LZO_CC_INTELC && (__INTEL_COMPILER >= 900))
/* disable pedantic warnings in system header files */
#  pragma warning(disable: 1684)
#endif
#if (LZO_CC_SUNPROC)
#if !defined(__cplusplus)
#  pragma error_messages(off,E_END_OF_LOOP_CODE_NOT_REACHED)
#  pragma error_messages(off,E_LOOP_NOT_ENTERED_AT_TOP)
#  pragma error_messages(off,E_STATEMENT_NOT_REACHED)
#endif
#endif
/***********************************************************************
// function types
************************************************************************/
#if !defined(__LZO_NOEXPORT1)
#  define __LZO_NOEXPORT1       /*empty*/
#endif
#if !defined(__LZO_NOEXPORT2)
#  define __LZO_NOEXPORT2       /*empty*/
#endif
#if 1
#  define LZO_PUBLIC_DECL(r)    LZO_EXTERN(r)
#endif
#if 1
#  define LZO_PUBLIC_IMPL(r)    LZO_PUBLIC(r)
#endif
#if !defined(LZO_LOCAL_DECL)
#  define LZO_LOCAL_DECL(r)     __LZO_EXTERN_C LZO_LOCAL_IMPL(r)
#endif
#if !defined(LZO_LOCAL_IMPL)
#  define LZO_LOCAL_IMPL(r)     __LZO_NOEXPORT1 r __LZO_NOEXPORT2 __LZO_CDECL
#endif
#if 1
#  define LZO_STATIC_DECL(r)    LZO_PRIVATE(r)
#endif
#if 1
#  define LZO_STATIC_IMPL(r)    LZO_PRIVATE(r)
#endif
/***********************************************************************
************************************************************************/
#if defined(__LZO_IN_MINILZO) || (LZO_CFG_FREESTANDING)
#elif 1
#  include <string.h>
#  define LZO_WANT_ACC_INCD_H 1
#endif
#if defined(LZO_HAVE_CONFIG_H)
#  define LZO_CFG_NO_CONFIG_HEADER 1
#endif
#include "lzo_supp.h"
/* Integral types */
#if 1 || defined(lzo_int8_t) || defined(lzo_uint8_t)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int8_t)  == 1)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint8_t) == 1)
#endif
#if 1 || defined(lzo_int16_t) || defined(lzo_uint16_t)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int16_t)  == 2)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint16_t) == 2)
#endif
#if 1 || defined(lzo_int32_t) || defined(lzo_uint32_t)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int32_t)  == 4)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint32_t) == 4)
#endif
#if defined(lzo_int64_t) || defined(lzo_uint64_t)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_int64_t)  == 8)
LZO_COMPILE_TIME_ASSERT_HEADER(sizeof(lzo_uint64_t) == 8)
#endif
#if (LZO_CFG_FREESTANDING)
#  undef HAVE_MEMCMP
#  undef HAVE_MEMCPY
#  undef HAVE_MEMMOVE
#  undef HAVE_MEMSET
#endif
#if !(HAVE_MEMCMP)
#  undef memcmp
#  define memcmp(a,b,c)         lzo_memcmp(a,b,c)
#  undef lzo_memcmp
#  define lzo_memcmp(a,b,c)     memcmp(a,b,c)
#endif
#if !(HAVE_MEMCPY)
#  undef memcpy
#  define memcpy(a,b,c)         lzo_memcpy(a,b,c)
#  undef lzo_memcpy
#  define lzo_memcpy(a,b,c)     memcpy(a,b,c)
#endif
#if !(HAVE_MEMMOVE)
#  undef memmove
#  define memmove(a,b,c)        lzo_memmove(a,b,c)
#  undef lzo_memmove
#  define lzo_memmove(a,b,c)    memmove(a,b,c)
#endif
#if !(HAVE_MEMSET)
#  undef memset
#  define memset(a,b,c)         lzo_memset(a,b,c)
#  undef lzo_memset
#  define lzo_memset(a,b,c)     memset(a,b,c)
#endif
#undef NDEBUG
#if (LZO_CFG_FREESTANDING)
#  undef LZO_DEBUG
#  define NDEBUG 1
#  undef assert
#  define assert(e) ((void)0)
#  if !defined(LZO_DEBUG)
#    define NDEBUG 1
#  endif
#  include <assert.h>
#endif
#if 0 && defined(__BOUNDS_CHECKING_ON)
#  include <unchecked.h>
#  define BOUNDS_CHECKING_OFF_DURING(stmt)      stmt
#  define BOUNDS_CHECKING_OFF_IN_EXPR(expr)     (expr)
#endif
#if (LZO_CFG_PGO)
#  undef __lzo_likely
#  undef __lzo_unlikely
#  define __lzo_likely(e)       (e)
#  define __lzo_unlikely(e)     (e)
#endif
#undef _
#undef __
#undef ___
#undef ____
#undef _p0
#undef _p1
#undef _p2
#undef _p3
#undef _p4
#undef _s0
#undef _s1
#undef _s2
#undef _s3
#undef _s4
#undef _ww
/***********************************************************************
************************************************************************/
#if 1
#  define LZO_BYTE(x)       ((unsigned char) (x))
#  define LZO_BYTE(x)       ((unsigned char) ((x) & 0xff))
#endif
#define LZO_MAX(a,b)        ((a) >= (b) ? (a) : (b))
#define LZO_MIN(a,b)        ((a) <= (b) ? (a) : (b))
#define LZO_MAX3(a,b,c)     ((a) >= (b) ? LZO_MAX(a,c) : LZO_MAX(b,c))
#define LZO_MIN3(a,b,c)     ((a) <= (b) ? LZO_MIN(a,c) : LZO_MIN(b,c))
#define lzo_sizeof(type)    ((lzo_uint) (sizeof(type)))
#define LZO_HIGH(array)     ((lzo_uint) (sizeof(array)/sizeof(*(array))))
/* this always fits into 32 bits */
#define LZO_SIZE(bits)      (1u << (bits))
#define LZO_MASK(bits)      (LZO_SIZE(bits) - 1)
#define LZO_UMASK(bits)     (LZO_USIZE(bits) - 1)
#if !defined(DMUL)
#if 0
/* 32*32 multiplies may be faster than 64*64 on some 64-bit machines,
* but then we need extra casts from unsigned<->size_t */
#  define DMUL(a,b) ((lzo_xint) ((lzo_uint32_t)(a) * (lzo_uint32_t)(b)))
#  define DMUL(a,b) ((lzo_xint) ((a) * (b)))
#endif
#endif
/***********************************************************************
// compiler and architecture specific stuff
************************************************************************/
/* Some defines that indicate if memory can be accessed at unaligned
* memory addresses. You should also test that this is actually faster
* even if it is allowed by your system.
*/
#include "lzo_func.h"
#ifndef UA_SET1
#define UA_SET1             LZO_MEMOPS_SET1
#endif
#ifndef UA_SET2
#define UA_SET2             LZO_MEMOPS_SET2
#endif
#ifndef UA_SET3
#define UA_SET3             LZO_MEMOPS_SET3
#endif
#ifndef UA_SET4
#define UA_SET4             LZO_MEMOPS_SET4
#endif
#ifndef UA_MOVE1
#define UA_MOVE1            LZO_MEMOPS_MOVE1
#endif
#ifndef UA_MOVE2
#define UA_MOVE2            LZO_MEMOPS_MOVE2
#endif
#ifndef UA_MOVE3
#define UA_MOVE3            LZO_MEMOPS_MOVE3
#endif
#ifndef UA_MOVE4
#define UA_MOVE4            LZO_MEMOPS_MOVE4
#endif
#ifndef UA_MOVE8
#define UA_MOVE8            LZO_MEMOPS_MOVE8
#endif
#ifndef UA_COPY1
#define UA_COPY1            LZO_MEMOPS_COPY1
#endif
#ifndef UA_COPY2
#define UA_COPY2            LZO_MEMOPS_COPY2
#endif
#ifndef UA_COPY3
#define UA_COPY3            LZO_MEMOPS_COPY3
#endif
#ifndef UA_COPY4
#define UA_COPY4            LZO_MEMOPS_COPY4
#endif
#ifndef UA_COPY8
#define UA_COPY8            LZO_MEMOPS_COPY8
#endif
#ifndef UA_COPYN
#define UA_COPYN            LZO_MEMOPS_COPYN
#endif
#ifndef UA_COPYN_X
#define UA_COPYN_X          LZO_MEMOPS_COPYN
#endif
#ifndef UA_GET_LE16
#define UA_GET_LE16         LZO_MEMOPS_GET_LE16
#endif
#ifndef UA_GET_LE32
#define UA_GET_LE32         LZO_MEMOPS_GET_LE32
#endif
#ifdef LZO_MEMOPS_GET_LE64
#ifndef UA_GET_LE64
#define UA_GET_LE64         LZO_MEMOPS_GET_LE64
#endif
#endif
#ifndef UA_GET_NE16
#define UA_GET_NE16         LZO_MEMOPS_GET_NE16
#endif
#ifndef UA_GET_NE32
#define UA_GET_NE32         LZO_MEMOPS_GET_NE32
#endif
#ifdef LZO_MEMOPS_GET_NE64
#ifndef UA_GET_NE64
#define UA_GET_NE64         LZO_MEMOPS_GET_NE64
#endif
#endif
#ifndef UA_PUT_LE16
#define UA_PUT_LE16         LZO_MEMOPS_PUT_LE16
#endif
#ifndef UA_PUT_LE32
#define UA_PUT_LE32         LZO_MEMOPS_PUT_LE32
#endif
#ifndef UA_PUT_NE16
#define UA_PUT_NE16         LZO_MEMOPS_PUT_NE16
#endif
#ifndef UA_PUT_NE32
#define UA_PUT_NE32         LZO_MEMOPS_PUT_NE32
#endif
/* Fast memcpy that copies multiples of 8 byte chunks.
* len is the number of bytes.
* note: all parameters must be lvalues, len >= 8
*       dest and src advance, len is undefined afterwards
*/
#define MEMCPY8_DS(dest,src,len) \
lzo_memcpy(dest,src,len); dest += len; src += len
#define BZERO8_PTR(s,l,n) \
lzo_memset((lzo_voidp)(s),0,(lzo_uint)(l)*(n))
#define MEMCPY_DS(dest,src,len) \
do *dest++ = *src++; while (--len > 0)
/***********************************************************************
************************************************************************/
LZO_EXTERN(const lzo_bytep) lzo_copyright(void);

/* Generate compressed data in a deterministic way.
* This is fully portable, and compression can be faster as well.
* A reason NOT to be deterministic is when the block size is
* very small (e.g. 8kB) or the dictionary is big, because
* then the initialization of the dictionary becomes a relevant
* magnitude for compression speed.
*/
#ifndef LZO_DETERMINISTIC
#define LZO_DETERMINISTIC 1
#endif
#ifndef LZO_DICT_USE_PTR
#define LZO_DICT_USE_PTR 1
#endif
#if (LZO_DICT_USE_PTR)
#  define lzo_dict_t    const lzo_bytep
#  define lzo_dict_t    lzo_uint
#endif
#endif /* already included */
/* vim:set ts=4 sw=4 et: */
