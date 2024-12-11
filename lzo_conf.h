#ifndef __LZO_CONF_H
#define __LZO_CONF_H 1
#if !defined(__LZO_IN_MINILZO)
#if defined(LZO_CFG_FREESTANDING) && (LZO_CFG_FREESTANDING)
#define LZO_LIBC_FREESTANDING 1
#define LZO_OS_FREESTANDING 1
#endif
#if defined(LZO_CFG_EXTRA_CONFIG_HEADER)
#include LZO_CFG_EXTRA_CONFIG_HEADER
#endif
#if defined(__LZOCONF_H) || defined(__LZOCONF_H_INCLUDED)
#error """"))) */
/* #define __LZO_EXPORT1 __declspec(dllexport) */
#endif
#include <lzoconf.h>
#if defined(LZO_CFG_EXTRA_CONFIG_HEADER2)
#include LZO_CFG_EXTRA_CONFIG_HEADER2
#endif
#endif /* !defined(__LZO_IN_MINILZO) */
#if !defined(__LZOCONF_H_INCLUDED) || (LZO_VERSION+0 != 0x20a0)
#error """" warnings */
#pragma warning(disable: 4702)
#endif
#if (LZO_CC_MSC && (_MSC_VER >= 1000))
#pragma warning(disable: 4127 4701)
/* disable warnings about inlining */
#pragma warning(disable: 4514 4710 4711)
#endif
#if (LZO_CC_MSC && (_MSC_VER >= 1300))
/* disable '''' warnings in system header files */
#pragma warning(disable: 4746)
#endif
#if (LZO_CC_INTELC && (__INTEL_COMPILER >= 900))
/* disable pedantic warnings in system header files */
#pragma warning(disable: 1684)
#endif
#if (LZO_CC_SUNPROC)
#if !defined(__cplusplus)
#pragma error_messages(off,E_END_OF_LOOP_CODE_NOT_REACHED)
#pragma error_messages(off,E_LOOP_NOT_ENTERED_AT_TOP)
#pragma error_messages(off,E_STATEMENT_NOT_REACHED)
#endif
#endif
/***********************************************************************
// function types
************************************************************************/
#if !defined(__LZO_NOEXPORT1)
#define __LZO_NOEXPORT1/*empty*/
#endif
#if !defined(__LZO_NOEXPORT2)
#define __LZO_NOEXPORT2/*empty*/
#endif
#if 1
#define LZO_PUBLIC_DECL(r)LZO_EXTERN(r)
#endif
#if 1
#define LZO_PUBLIC_IMPL(r)LZO_PUBLIC(r)
#endif
#if !defined(LZO_LOCAL_DECL)
#define LZO_LOCAL_DECL(r)__LZO_EXTERN_C LZO_LOCAL_IMPL(r)
#endif
#if !defined(LZO_LOCAL_IMPL)
#define LZO_LOCAL_IMPL(r)__LZO_NOEXPORT1 r __LZO_NOEXPORT2 __LZO_CDECL
#endif
#if 1
#define LZO_STATIC_DECL(r)LZO_PRIVATE(r)
#endif
#if 1
#define LZO_STATIC_IMPL(r)LZO_PRIVATE(r)
#endif
/***********************************************************************
************************************************************************/
#if defined(__LZO_IN_MINILZO) || (LZO_CFG_FREESTANDING)
#elif 1
#include <string.h>
#define LZO_WANT_ACC_INCD_H 1
#endif
#if defined(LZO_HAVE_CONFIG_H)
#define LZO_CFG_NO_CONFIG_HEADER 1
#endif
#include "lzo_supp.h"""
#ifndef UA_SET1
#define UA_SET1LZO_MEMOPS_SET1
#endif
#ifndef UA_SET2
#define UA_SET2LZO_MEMOPS_SET2
#endif
#ifndef UA_SET3
#define UA_SET3LZO_MEMOPS_SET3
#endif
#ifndef UA_SET4
#define UA_SET4LZO_MEMOPS_SET4
#endif
#ifndef UA_MOVE1
#define UA_MOVE1LZO_MEMOPS_MOVE1
#endif
#ifndef UA_MOVE2
#define UA_MOVE2LZO_MEMOPS_MOVE2
#endif
#ifndef UA_MOVE3
#define UA_MOVE3LZO_MEMOPS_MOVE3
#endif
#ifndef UA_MOVE4
#define UA_MOVE4LZO_MEMOPS_MOVE4
#endif
#ifndef UA_MOVE8
#define UA_MOVE8LZO_MEMOPS_MOVE8
#endif
#ifndef UA_COPY1
#define UA_COPY1LZO_MEMOPS_COPY1
#endif
#ifndef UA_COPY2
#define UA_COPY2LZO_MEMOPS_COPY2
#endif
#ifndef UA_COPY3
#define UA_COPY3LZO_MEMOPS_COPY3
#endif
#ifndef UA_COPY4
#define UA_COPY4LZO_MEMOPS_COPY4
#endif
#ifndef UA_COPY8
#define UA_COPY8LZO_MEMOPS_COPY8
#endif
#ifndef UA_COPYN
#define UA_COPYNLZO_MEMOPS_COPYN
#endif
#ifndef UA_COPYN_X
#define UA_COPYN_XLZO_MEMOPS_COPYN
#endif
#ifndef UA_GET_LE16
#define UA_GET_LE16LZO_MEMOPS_GET_LE16
#endif
#ifndef UA_GET_LE32
#define UA_GET_LE32LZO_MEMOPS_GET_LE32
#endif
#ifdef LZO_MEMOPS_GET_LE64
#ifndef UA_GET_LE64
#define UA_GET_LE64LZO_MEMOPS_GET_LE64
#endif
#endif
#ifndef UA_GET_NE16
#define UA_GET_NE16LZO_MEMOPS_GET_NE16
#endif
#ifndef UA_GET_NE32
#define UA_GET_NE32LZO_MEMOPS_GET_NE32
#endif
#ifdef LZO_MEMOPS_GET_NE64
#ifndef UA_GET_NE64
#define UA_GET_NE64LZO_MEMOPS_GET_NE64
#endif
#endif
#ifndef UA_PUT_LE16
#define UA_PUT_LE16LZO_MEMOPS_PUT_LE16
#endif
#ifndef UA_PUT_LE32
#define UA_PUT_LE32LZO_MEMOPS_PUT_LE32
#endif
#ifndef UA_PUT_NE16
#define UA_PUT_NE16LZO_MEMOPS_PUT_NE16
#endif
#ifndef UA_PUT_NE32
#define UA_PUT_NE32LZO_MEMOPS_PUT_NE32
#endif
/* Fast memcpy that copies multiples of 8 byte chunks.
* len is the number of bytes.
* note: all parameters must be lvalues, len >= 8
*dest and src advance, len is undefined afterwards
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
#define lzo_dict_tconst lzo_bytep
#define lzo_dict_tlzo_uint
#endif
#endif /* already included */
/* vim:set ts=4 sw=4 et: */