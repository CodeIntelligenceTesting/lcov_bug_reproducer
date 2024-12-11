

#ifndef __LZO_SUPP_H_INCLUDED
#define __LZO_SUPP_H_INCLUDED 1
#if (LZO_CFG_NO_CONFIG_HEADER)

#else
#if !(LZO_CFG_AUTO_NO_HEADERS)
#if (LZO_LIBC_NAKED)

#  define HAVE_LIMITS_H 1
#  define HAVE_STDARG_H 1
#  define HAVE_STDDEF_H 1

#  define HAVE_LIMITS_H 1
#  define HAVE_SETJMP_H 1
#define HAVE_FCNTL_H 1
#define HAVE_FLOAT_H 1
#define HAVE_LIMITS_H 1
#define HAVE_MALLOC_H 1
#define HAVE_MEMORY_H 1
#define HAVE_SETJMP_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#if (LZO_OS_POSIX)
#  if (LZO_OS_POSIX_AIX)
#    define HAVE_ALLOCA_H 1
#  endif
#  if (LZO_LIBC_DIETLIBC || LZO_LIBC_GLIBC || LZO_LIBC_UCLIBC)
#    define HAVE_STRINGS_H 1
#    define HAVE_SYS_MMAN_H 1
#    define HAVE_SYS_RESOURCE_H 1
#    define HAVE_SYS_WAIT_H 1
#  endif
#  if (LZO_LIBC_NEWLIB)
#    undef HAVE_STRINGS_H
#  endif
#elif (LZO_OS_CYGWIN)
#  define HAVE_IO_H 1
#elif (LZO_OS_EMX)
#  define HAVE_ALLOCA_H 1
#  define HAVE_IO_H 1

#  if !defined(__MINT__)
#    undef HAVE_MALLOC_H
#  endif

#  undef HAVE_DIRENT_H
#  undef HAVE_FCNTL_H
#  undef HAVE_MALLOC_H
#define HAVE_SHARE_H 1
#if (LZO_CC_AZTECC)
#  undef HAVE_CONIO_H
#  undef HAVE_DIRECT_H
#  undef HAVE_DIRENT_H
#  undef HAVE_MALLOC_H
#  undef HAVE_SHARE_H
#  undef HAVE_UNISTD_H
#  undef HAVE_UTIME_H
#  undef HAVE_SYS_STAT_H
#  undef HAVE_SYS_TIME_H
#  undef HAVE_SYS_TYPES_H
#elif (LZO_CC_BORLANDC)
#  undef HAVE_DIRENT_H
#  undef HAVE_UNISTD_H

#elif (LZO_OS_DOS32 && LZO_CC_GNUC) && defined(__DJGPP__)

#  define HAVE_ALLOCA_H 1
#  undef HAVE_DIRENT_H
#  undef HAVE_UNISTD_H
#elif (LZO_CC_IBMC && LZO_OS_OS2)
#  undef HAVE_DOS_H
#  undef HAVE_DOS_H
#  undef HAVE_SHARE_H
#  undef HAVE_IO_H
#  undef HAVE_MALLOC_H
#  undef HAVE_MEMORY_H
#  undef HAVE_SHARE_H
#  undef HAVE_UNISTD_H
#  undef HAVE_UTIME_H
#  undef HAVE_SYS_STAT_H
#  define HAVE_SYS_UTIME_H 1

#  if (LZO_OS_WIN32 || LZO_OS_WIN64)
#    undef HAVE_DIRENT_H
#  endif
#  if (__TURBOC__ < 0x0200)
#  endif
#elif (LZO_CC_ZORTECHC)
#  undef HAVE_DIRENT_H
#  undef HAVE_MEMORY_H
#  undef HAVE_UNISTD_H
#  undef HAVE_UTIME_H
#  undef HAVE_SYS_TIME_H
#endif
#endif
#if (LZO_OS_CONSOLE)
#  undef HAVE_UTIME_H
#  undef HAVE_SYS_STAT_H
#  undef HAVE_SYS_TIME_H
#  undef HAVE_SYS_TYPES_H
#  define HAVE_STDINT_H 1
#endif
#if (HAVE_SYS_TIME_H && HAVE_TIME_H)
#  define TIME_WITH_SYS_TIME 1
#endif
#endif
#endif
#if !(LZO_CFG_AUTO_NO_FUNCTIONS)
#if (LZO_LIBC_NAKED)
#elif (LZO_LIBC_FREESTANDING)
#elif (LZO_LIBC_MOSTLY_FREESTANDING)
#  define HAVE_LONGJMP 1
#  define HAVE_MEMCMP 1
#  define HAVE_MEMCPY 1
#  define HAVE_MEMMOVE 1
#  define HAVE_MEMSET 1
#  define HAVE_SETJMP 1
#else
#define HAVE_ACCESS 1
#define HAVE_ALLOCA 1
#define HAVE_ATEXIT 1
#define HAVE_STAT 1
#define HAVE_STRCHR 1
#define HAVE_STRDUP 1
#define HAVE_STRERROR 1
#define HAVE_STRFTIME 1
#define HAVE_STRRCHR 1
#define HAVE_STRSTR 1
#define HAVE_TIME 1
#define HAVE_UMASK 1
#define HAVE_UTIME 1
#define HAVE_VSNPRINTF 1
#if (LZO_OS_BEOS || LZO_OS_CYGWIN || LZO_OS_POSIX || LZO_OS_QNX || LZO_OS_VMS)
#  define HAVE_STRCASECMP 1
#  define HAVE_STRNCASECMP 1

#  define HAVE_STRCASECMP 1
#  define HAVE_STRNCASECMP 1
#else
#  define HAVE_STRICMP 1
#  define HAVE_STRNICMP 1
#endif
#if (LZO_OS_POSIX)
#  if (LZO_OS_POSIX_AIX)
#    define HAVE_GETRUSAGE 1
#  elif (LZO_OS_POSIX_DARWIN && LZO_LIBC_MSL)
#    undef HAVE_CHOWN
#    undef HAVE_LSTAT
#  endif
#  if (LZO_CC_GNUC < 0x025f00ul)
#    undef HAVE_SNPRINTF
#    undef HAVE_VSNPRINTF
#  endif
#elif (LZO_OS_EMX)
#  undef HAVE_CHOWN
#  undef HAVE_LSTAT
#  undef HAVE_GETTIMEOFDAY
#  undef HAVE_LSTAT
#  undef HAVE_SNPRINTF
#  undef HAVE_UMASK
#  undef HAVE_UTIME
#  undef HAVE_VSNPRINTF
#endif
#if (LZO_OS_DOS16 || LZO_OS_DOS32 || LZO_OS_OS2 || LZO_OS_OS216 || LZO_OS_WIN16 || LZO_OS_WIN32 || LZO_OS_WIN64)
#undef HAVE_CHOWN
#undef HAVE_GETTIMEOFDAY
#undef HAVE_LSTAT
#undef HAVE_UMASK
#if (LZO_CC_AZTECC)
#  undef HAVE_ALLOCA
#  undef HAVE_DIFFTIME
#  if ((__BORLANDC__ < 0x0410) && LZO_OS_WIN16)
#    undef HAVE_ALLOCA
#  endif
#  if (__BORLANDC__ < 0x0550)
#    undef HAVE_SNPRINTF
#    undef HAVE_VSNPRINTF
#  endif
#elif (LZO_CC_DMC)
#  if (LZO_OS_WIN16)
#    undef HAVE_ALLOCA
#  endif
#  define snprintf _snprintf
#  define vsnprintf _vsnprintf

#  undef HAVE_SNPRINTF
#  undef HAVE_VSNPRINTF
#elif (LZO_OS_DOS32 && LZO_CC_HIGHC)
#elif (LZO_CC_IBMC)
#  undef HAVE_SNPRINTF
#  undef HAVE_VSNPRINTF
#elif (LZO_CC_CLANG_MSC || LZO_CC_INTELC_MSC)
#  ifndef snprintf
#  define snprintf _snprintf
#    undef HAVE_SNPRINTF
#    undef HAVE_VSNPRINTF
#  elif (_MSC_VER < 1500)
#    ifndef snprintf

#    endif
#    ifndef vsnprintf

#    endif
#  elif (_MSC_VER < 1900)
#    undef HAVE_CHMOD
#  endif
#  if (__SC__ < 0x600)
#    undef HAVE_SNPRINTF
#    undef HAVE_VSNPRINTF
#  else
#    define snprintf _snprintf

#  endif
#  if (__SC__ < 0x700)
#    undef HAVE_DIFFTIME
#    undef HAVE_UTIME
#  endif
#elif (LZO_CC_TOPSPEEDC)
#  undef HAVE_SNPRINTF
#  undef HAVE_VSNPRINTF
#elif (LZO_CC_TURBOC)
#  undef HAVE_ALLOCA
#  undef HAVE_SNPRINTF
#  undef HAVE_VSNPRINTF
#  if (__TURBOC__ < 0x0200)
#  elif (__WATCOMC__ < 1200)


#  endif
#elif (LZO_CC_ZORTECHC)
#  if (LZO_OS_WIN16 && (LZO_MM_MEDIUM || LZO_MM_LARGE || LZO_MM_HUGE))
#    undef HAVE_ALLOCA
#  endif
#  undef HAVE_DIFFTIME
#  undef HAVE_SNPRINTF
#  undef HAVE_UTIME
#  undef HAVE_VSNPRINTF
#endif
#endif
#if (LZO_OS_CONSOLE)
#  undef HAVE_ACCESS
#  undef HAVE_CHMOD
#  undef HAVE_CHOWN
#  undef HAVE_GETTIMEOFDAY
#  undef HAVE_FSTAT
#  undef HAVE_GETTIMEOFDAY
#  undef HAVE_LSTAT
#endif
#endif
#endif
#if !(LZO_CFG_AUTO_NO_SIZES)
#if !defined(SIZEOF_SHORT) && defined(LZO_SIZEOF_SHORT)
#  define SIZEOF_SHORT          LZO_SIZEOF_SHORT
#endif
#if !defined(SIZEOF_INT) && defined(LZO_SIZEOF_INT)
#  define SIZEOF_INT            LZO_SIZEOF_INT
#endif
#if !defined(SIZEOF_LONG) && defined(LZO_SIZEOF_LONG)

#endif
#if !defined(SIZEOF_LONG_LONG) && defined(LZO_SIZEOF_LONG_LONG)

#endif
#if !defined(SIZEOF___INT32) && defined(LZO_SIZEOF___INT32)

#endif
#if !defined(SIZEOF___INT64) && defined(LZO_SIZEOF___INT64)
#endif
#endif
#if (HAVE_SIGNAL) && !defined(RETSIGTYPE)
#  define RETSIGTYPE void
#endif
#endif
#if !(LZO_CFG_SKIP_LZO_TYPES)
#if 1 && !defined(lzo_signo_t) && defined(__linux__) && defined(__dietlibc__) && (LZO_SIZEOF_INT != 4)
#  define lzo_signo_t               lzo_int32e_t
#endif
#if !defined(lzo_signo_t)
#  define lzo_signo_t               int
#endif
#if defined(__cplusplus)
extern "C" {}
#endif
#endif
#endif
#if defined(LZO_WANT_ACC_INCD_H)
#  undef LZO_WANT_ACC_INCD_H
#ifndef __LZO_INCD_H_INCLUDED
#define __LZO_INCD_H_INCLUDED 1
#if (LZO_LIBC_NAKED)
#ifndef __LZO_FALLBACK_STDDEF_H_INCLUDED
#define __LZO_FALLBACK_STDDEF_H_INCLUDED 1
#if defined(__PTRDIFF_TYPE__)
#else
typedef unsigned long lzo_fallback_size_t;
#endif
#if !defined(ptrdiff_t)
typedef lzo_fallback_ptrdiff_t ptrdiff_t;
#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED 1
#endif
#endif
#if !defined(size_t)
typedef lzo_fallback_size_t size_t;
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED 1
#endif
#endif
#if !defined(__cplusplus) && !defined(wchar_t)
typedef unsigned short wchar_t;
#ifndef _WCHAR_T_DEFINED
#endif
#endif
#ifndef offsetof
#define offsetof(s,m)   ((size_t)((ptrdiff_t)&(((s*)0)->m)))
#endif
#endif
#elif (LZO_LIBC_FREESTANDING)
# if defined(HAVE_STDDEF_H) && (HAVE_STDDEF_H+0)
#  include <stddef.h>
# endif
# if defined(HAVE_STDINT_H) && (HAVE_STDINT_H+0)
#  include <stdint.h>
# endif

# if defined(HAVE_STDIO_H) && (HAVE_STDIO_H+0)
#  include <stdio.h>
# endif
# if defined(HAVE_STDDEF_H) && (HAVE_STDDEF_H+0)
#  include <stddef.h>
# endif
# if defined(HAVE_STDINT_H) && (HAVE_STDINT_H+0)
#  include <stdint.h>
# endif
#else
#include <stdio.h>
#if defined(HAVE_TIME_H) && (HAVE_TIME_H+0) && defined(__MSL__) && defined(__cplusplus)
# include <time.h>
#endif
#if defined(HAVE_SYS_TYPES_H) && (HAVE_SYS_TYPES_H+0)
# include <sys/types.h>
#endif
#if defined(HAVE_SYS_STAT_H) && (HAVE_SYS_STAT_H+0)
# include <sys/stat.h>
#endif
#if defined(STDC_HEADERS) && (STDC_HEADERS+0)
# include <stdlib.h>
#elif defined(HAVE_STDLIB_H) && (HAVE_STDLIB_H+0)
# include <stdlib.h>
#endif
#include <stddef.h>
#if defined(HAVE_STRING_H) && (HAVE_STRING_H+0)
# if defined(STDC_HEADERS) && (STDC_HEADERS+0)

#  include <memory.h>
# endif
# include <string.h>
#endif
#if defined(HAVE_STRINGS_H) && (HAVE_STRINGS_H+0)
# include <strings.h>
#endif
#if defined(HAVE_INTTYPES_H) && (HAVE_INTTYPES_H+0)
# include <inttypes.h>
#endif
#if defined(HAVE_STDINT_H) && (HAVE_STDINT_H+0)
# include <stdint.h>
#endif
#if defined(HAVE_UNISTD_H) && (HAVE_UNISTD_H+0)
# include <unistd.h>
#endif
#endif
#endif
#endif
#if defined(LZO_WANT_ACC_INCE_H)
#  undef LZO_WANT_ACC_INCE_H
#ifndef __LZO_INCE_H_INCLUDED
#define __LZO_INCE_H_INCLUDED 1
#if (LZO_LIBC_NAKED)


#  if (HAVE_SETJMP_H)
#  include <errno.h>
#endif
#if (HAVE_MALLOC_H)
#endif
#if (LZO_CC_NDPC)
#  include <os.h>
#endif
#if defined(__TOS__) && (defined(__PUREC__) || defined(__TURBOC__))
#  include <ext.h>
#endif
#endif
#endif
#endif
#if defined(LZO_WANT_ACC_INCI_H)
#  undef LZO_WANT_ACC_INCI_H
#ifndef __LZO_INCI_H_INCLUDED
#define __LZO_INCI_H_INCLUDED 1
#if (LZO_LIBC_NAKED)
#elif (LZO_LIBC_FREESTANDING)
#elif (LZO_LIBC_MOSTLY_FREESTANDING)
#else
#if (LZO_OS_TOS && (LZO_CC_PUREC || LZO_CC_TURBOC))
#  include <tos.h>
#elif (LZO_HAVE_WINDOWS_H)
#  if 1 && !defined(WIN32_LEAN_AND_MEAN)

#  elif (LZO_CC_WATCOMC)
#    include <i86.h>
#  endif
#elif (LZO_OS_OS216)
#  if (LZO_CC_WATCOMC)
#    include <i86.h>
#  endif
#endif
#if (HAVE_SYS_MMAN_H)
#  include <sys/mman.h>
#endif
#if (HAVE_SYS_RESOURCE_H)
#  include <sys/resource.h>
#endif
#if (LZO_OS_DOS16 || LZO_OS_OS216 || LZO_OS_WIN16)
#  if defined(FP_OFF)

#  elif defined(_FP_OFF)
#    define LZO_PTR_FP_OFF(x)   _FP_OFF(x)
#  else
#    define LZO_PTR_FP_OFF(x)   (((const unsigned __far*)&(x))[0])
#  endif
#  if defined(FP_SEG)

#  elif defined(_FP_SEG)
#    define LZO_PTR_FP_SEG(x)   _FP_SEG(x)
#  else
#    define LZO_PTR_FP_SEG(x)   (((const unsigned __far*)&(x))[1])
#  endif
#  if defined(MK_FP)
#    define LZO_PTR_MK_FP(s,o)  MK_FP(s,o)
#  elif defined(_MK_FP)
#    define LZO_PTR_MK_FP(s,o)  _MK_FP(s,o)
#  else
#    define LZO_PTR_MK_FP(s,o)  ((void __far*)(((unsigned long)(s)<<16)+(unsigned)(o)))
#  endif
#  if 0
#    undef LZO_PTR_FP_OFF
#    undef LZO_PTR_FP_SEG
#    undef LZO_PTR_MK_FP
#    define LZO_PTR_FP_OFF(x)   (((const unsigned __far*)&(x))[0])
#    define LZO_PTR_FP_SEG(x)   (((const unsigned __far*)&(x))[1])
#    define LZO_PTR_MK_FP(s,o)  ((void __far*)(((unsigned long)(s)<<16)+(unsigned)(o)))
#  endif
#endif
#endif
#endif
#endif
#if defined(LZO_WANT_ACC_LIB_H)
#  undef LZO_WANT_ACC_LIB_H
#ifndef __LZO_LIB_H_INCLUDED

#if !defined(__LZOLIB_FUNCNAME)
#  define __LZOLIB_FUNCNAME(f)  f
#endif
#if !defined(LZOLIB_EXTERN)
#  define LZOLIB_EXTERN(r,f)                extern r __LZOLIB_FUNCNAME(f)
#endif
#if !defined(LZOLIB_EXTERN_NOINLINE)
#  if defined(__lzo_noinline)
#    define LZOLIB_EXTERN_NOINLINE(r,f)     extern __lzo_noinline r __LZOLIB_FUNCNAME(f)
#  else
#    define LZOLIB_EXTERN_NOINLINE(r,f)     extern r __LZOLIB_FUNCNAME(f)
#  endif
#endif
#if (LZO_SIZEOF_LONG > LZO_SIZEOF_VOID_P)
#  define lzolib_handle_t       long
#else
#  define lzolib_handle_t       lzo_intptr_t
#endif
#if 0
LZOLIB_EXTERN(int, lzo_ascii_digit)   (int);
LZOLIB_EXTERN(int, lzo_ascii_islower) (int);
LZOLIB_EXTERN(int, lzo_ascii_isupper) (int);
LZOLIB_EXTERN(int, lzo_ascii_tolower) (int);
LZOLIB_EXTERN(int, lzo_ascii_toupper) (int);
LZOLIB_EXTERN(int, lzo_ascii_utolower) (int);
LZOLIB_EXTERN(int, lzo_ascii_utoupper) (int);
#endif
#define lzo_ascii_isdigit(c)    ((LZO_ICAST(unsigned, c) - 48) < 10)



#define lzo_ascii_toupper(c)    (LZO_ICAST(int, c) - (lzo_ascii_islower(c) << 5))
#define lzo_ascii_utolower(c)   lzo_ascii_tolower(LZO_ITRUNC(unsigned char, c))
#define lzo_ascii_utoupper(c)   lzo_ascii_toupper(LZO_ITRUNC(unsigned char, c))
#ifndef lzo_hsize_t
#if (LZO_HAVE_MM_HUGE_PTR)


#  define lzo_hchar_p   char __huge *


#else
#  define lzo_hsize_t   size_t

#  define lzo_hchar_p   char *
#  define lzo_hchar_pp  char **

#endif
#endif
LZOLIB_EXTERN(lzo_hchar_p, lzo_hstrrsep) (lzo_hchar_pp, const lzo_hchar_p);
LZOLIB_EXTERN(lzo_hchar_p, lzo_ascii_hstrlwr) (lzo_hchar_p);
#if defined(lzo_int64l_t)
#endif
LZOLIB_EXTERN_NOINLINE(lzo_hvoid_p, lzo_vget_lzo_hvoid_p) (lzo_hvoid_p, int);
LZOLIB_EXTERN_NOINLINE(const lzo_hvoid_p, lzo_vget_lzo_hvoid_cp) (const lzo_hvoid_p, int);
#if !defined(LZO_FN_PATH_MAX)
#if (LZO_OS_DOS16 || LZO_OS_WIN16)
#  define LZO_FN_PATH_MAX   143
#elif (LZO_OS_DOS32 || LZO_OS_OS2 || LZO_OS_OS216 || LZO_OS_WIN32 || LZO_OS_WIN64)


#elif (LZO_OS_DOS32 && LZO_CC_GNUC) && defined(__DJGPP__)
#elif (LZO_OS_DOS32)

#endif
#endif
#if !defined(LZO_FN_NAME_MAX)
#  define LZO_FN_NAME_MAX   LZO_FN_PATH_MAX
#endif



#define LZO_FNMATCH_PERIOD          8

LZOLIB_EXTERN(int, lzo_fnmatch) (const lzo_hchar_p, const lzo_hchar_p, int);
#undef __LZOLIB_USE_OPENDIR
#if (HAVE_DIRENT_H || LZO_CC_WATCOMC)
#  define __LZOLIB_USE_OPENDIR 1
#  if (LZO_OS_DOS32 && defined(__BORLANDC__))
#  elif (LZO_OS_DOS32 && LZO_CC_GNUC) && defined(__DJGPP__)
unsigned short f_date;
unsigned long f_size;
# endif
char f_name[LZO_FN_NAME_MAX+1];
char u_dirp;
#else
void* u_dirp;
char f_name[LZO_FN_NAME_MAX+1];
#endif
} lzo_dir_t;
#ifndef lzo_dir_p

#endif
LZOLIB_EXTERN(int, lzo_opendir)  (lzo_dir_p, const char*);
LZOLIB_EXTERN(int, lzo_readdir)  (lzo_dir_p);
LZOLIB_EXTERN(int, lzo_closedir) (lzo_dir_p);
#if (LZO_CC_GNUC) && (defined(__CYGWIN__) || defined(__MINGW32__))
#  define lzo_alloca(x)     __builtin_alloca((x))
#elif (LZO_CC_GNUC) && (LZO_OS_CONSOLE_PS2)


#elif (HAVE_ALLOCA)
#  define lzo_alloca(x)     LZO_STATIC_CAST(void *, alloca((x)))
#endif
#if (LZO_OS_DOS32 && LZO_CC_GNUC) && defined(__DJGPP__)

#  define lzo_stackavail()  _stackavail()
#elif ((LZO_ARCH_I086) && LZO_CC_MSC)
#endif
LZOLIB_EXTERN(lzo_intptr_t, lzo_get_osfhandle) (int);
LZOLIB_EXTERN(const char *, lzo_getenv) (const char *);
int mode;
int read_error;
const char* name;
lzo_pclock_gettime_t gettime;
#if defined(lzo_int64l_t)
lzo_uint64l_t ticks_base;
#endif
typedef struct lzo_getopt_t lzo_getopt_t;
#ifndef lzo_getopt_p

#endif
struct lzo_getopt_longopt_t;
typedef struct lzo_getopt_longopt_t lzo_getopt_longopt_t;
#ifndef lzo_getopt_longopt_p
#define lzo_getopt_longopt_p lzo_getopt_longopt_t *
#endif
struct lzo_getopt_longopt_t {
const char* name;
int has_arg;
int* flag;
int val;
};
typedef void (*lzo_getopt_opterr_t)(lzo_getopt_p, const char*, void *);
struct lzo_getopt_t {
void *user;
const char *progname;
int bad_option;
char *optarg;
const lzo_getopt_longopt_p longopts,
int* longind);
typedef struct {
lzo_uint32l_t seed;
} lzo_rand31_t;
#ifndef lzo_rand31_p
#define lzo_rand31_p lzo_rand31_t *
#endif
LZOLIB_EXTERN(void, lzo_srand31) (lzo_rand31_p, lzo_uint32l_t);
LZOLIB_EXTERN(lzo_uint32l_t, lzo_rand31) (lzo_rand31_p);
#if defined(lzo_int64l_t)
typedef struct {
lzo_uint64l_t seed;
} lzo_rand48_t;
} lzo_rand64_t;
#ifndef lzo_rand64_p

#endif
LZOLIB_EXTERN(void, lzo_srand64) (lzo_rand64_p, lzo_uint64l_t);
LZOLIB_EXTERN(lzo_uint32l_t, lzo_rand64) (lzo_rand64_p);
LZOLIB_EXTERN(lzo_uint32l_t, lzo_rand64_r32) (lzo_rand64_p);
#endif
typedef struct {
unsigned n;
lzo_uint32l_t s[624];
} lzo_randmt_t;
#ifndef lzo_randmt_p
#define lzo_randmt_p lzo_randmt_t *
#endif
LZOLIB_EXTERN(void, lzo_srandmt) (lzo_randmt_p, lzo_uint32l_t);
LZOLIB_EXTERN(lzo_uint32l_t, lzo_randmt) (lzo_randmt_p);
LZOLIB_EXTERN(lzo_uint32l_t, lzo_randmt_r32) (lzo_randmt_p);
#if defined(lzo_int64l_t)
typedef struct {
unsigned n;
lzo_uint64l_t s[312];
} lzo_randmt64_t;
#ifndef lzo_randmt64_p
#define lzo_randmt64_p lzo_randmt64_t *
#endif
LZOLIB_EXTERN(void, lzo_srandmt64) (lzo_randmt64_p, lzo_uint64l_t);
LZOLIB_EXTERN(lzo_uint64l_t, lzo_randmt64_r64) (lzo_randmt64_p);
#endif
#define __LZO_CXX_H_INCLUDED 1
#if defined(__cplusplus)
#if defined(LZO_CXX_NOTHROW)
#elif (LZO_CC_TURBOC)

#else
#  define __LZO_CXX_HAVE_ARRAY_NEW 1
#endif
#if (__LZO_CXX_HAVE_ARRAY_NEW)

#endif
#if (__LZO_CXX_HAVE_PLACEMENT_NEW)
#  if (LZO_CC_GNUC >= 0x030000ul)
#    define __LZO_CXX_HAVE_PLACEMENT_DELETE 1
#  elif (LZO_CC_INTELC)
#    define __LZO_CXX_HAVE_PLACEMENT_DELETE 1
#  elif (LZO_CC_MSC && (_MSC_VER >= 1200))
#    define __LZO_CXX_HAVE_PLACEMENT_DELETE 1


#  elif (LZO_CC_PGI)

#  endif
#endif
#if defined(LZO_CXX_DISABLE_NEW_DELETE)
#elif defined(new) || defined(delete)
#  define LZO_CXX_DISABLE_NEW_DELETE private:


#elif  (LZO_CC_HIGHC)
#  define LZO_CXX_DISABLE_NEW_DELETE private:


protected: static void operator delete(void*) __LZO_CXX_DO_DELETE \
protected: static void* operator new(size_t) __LZO_CXX_DO_NEW \
private:
#else

protected: static void operator delete(void*) __LZO_CXX_DO_DELETE \
static void operator delete[](void*) __LZO_CXX_DO_DELETE \
#else
#  define LZO_CXX_TRIGGER_FUNCTION_IMPL(klass) \
const void* klass::lzo_cxx_trigger_function() const { return LZO_STATIC_CAST(const void *, 0); }
#endif
#endif
#endif
#endif
#if defined(LZO_WANT_ACC_CHK_CH)
#  undef LZO_WANT_ACC_CHK_CH
#if !defined(LZOCHK_ASSERT)
#  define LZOCHK_ASSERT(expr)   LZO_COMPILE_TIME_ASSERT_HEADER(expr)
#endif
#if !defined(LZOCHK_ASSERT_SIGN_T)
#  define LZOCHK_ASSERT_SIGN_T(type,relop) \
LZOCHK_ASSERT( LZO_STATIC_CAST(type, -1)  relop  LZO_STATIC_CAST(type, 0)) \
LZOCHK_ASSERT( LZO_STATIC_CAST(type, ~LZO_STATIC_CAST(type, 0)) relop  LZO_STATIC_CAST(type, 0)) \
LZOCHK_ASSERT( LZO_STATIC_CAST(type, ~LZO_STATIC_CAST(type, 0)) ==     LZO_STATIC_CAST(type, -1))
#endif
#if !defined(LZOCHK_ASSERT_IS_SIGNED_T)
#  define LZOCHK_ASSERT_IS_SIGNED_T(type)       LZOCHK_ASSERT_SIGN_T(type,<)
#endif
#if !defined(LZOCHK_ASSERT_IS_UNSIGNED_T)
#  if (LZO_BROKEN_INTEGRAL_PROMOTION)
#    define LZOCHK_ASSERT_IS_UNSIGNED_T(type) \
LZOCHK_ASSERT( LZO_STATIC_CAST(type, -1) > LZO_STATIC_CAST(type, 0) )
#  else
#    define LZOCHK_ASSERT_IS_UNSIGNED_T(type)   LZOCHK_ASSERT_SIGN_T(type,>)
#  endif
#endif
#if defined(LZOCHK_CFG_PEDANTIC)
#if (LZO_CC_BORLANDC && (__BORLANDC__ >= 0x0550) && (__BORLANDC__ < 0x0560))

#elif (LZO_CC_BORLANDC && (__BORLANDC__ >= 0x0530) && (__BORLANDC__ < 0x0550))
#  pragma option push -w-osh
#endif
#endif
#if (LZO_0xffffffffL - LZO_UINT32_C(4294967294) != 1)
#  error "preprocessor error""preprocessor error"
#endif
#if +0

#endif
#if -0
#  error "preprocessor error"
#endif
#if +0 != 0
#  error "preprocessor error"
#endif
#if -0 != 0
#  error "preprocessor error"
#endif
#define LZOCHK_VAL  1
#define LZOCHK_TMP1 LZOCHK_VAL
#undef LZOCHK_VAL
#define LZOCHK_VAL  2
#define LZOCHK_TMP2 LZOCHK_VAL
#if (LZOCHK_TMP1 != 2)
#  error "preprocessor error 3a"
#endif
#undef LZOCHK_TMP1
#undef LZOCHK_TMP2
#if 0 || defined(LZOCHK_CFG_PEDANTIC)
#  if (LZO_ARCH_MIPS) && defined(_MIPS_SZINT)
LZOCHK_ASSERT((_MIPS_SZINT) == 8 * sizeof(int))
#  endif
#  if (LZO_ARCH_MIPS) && defined(_MIPS_SZLONG)
LZOCHK_ASSERT((_MIPS_SZLONG) == 8 * sizeof(long))
#  endif
#  if (LZO_ARCH_MIPS) && defined(_MIPS_SZPTR)
LZOCHK_ASSERT((_MIPS_SZPTR) == 8 * sizeof(void *))
#  endif
#endif
LZOCHK_ASSERT(1 == 1)
LZOCHK_ASSERT(__LZO_MASK_GEN(1u,1) == 1u)
LZOCHK_ASSERT(__LZO_MASK_GEN(1u,2) == 3u)
LZOCHK_ASSERT(__LZO_MASK_GEN(1u,3) == 7u)
LZOCHK_ASSERT(__LZO_MASK_GEN(1u,8) == 255u)
#if (LZO_SIZEOF_INT >= 2)
LZOCHK_ASSERT(__LZO_MASK_GEN(1,15) == 32767)
LZOCHK_ASSERT(__LZO_MASK_GEN(1u,16) == 0xffffU)
LZOCHK_ASSERT(__LZO_MASK_GEN(0u,16) == 0u)
#endif
LZOCHK_ASSERT(__LZO_MASK_GEN(1ul,16) == 0xffffUL)
LZOCHK_ASSERT(__LZO_MASK_GEN(0ul,16) == 0ul)
#if (LZO_SIZEOF_INT >= 4)
LZOCHK_ASSERT(__LZO_MASK_GEN(0ul,64) == 0ul)
#endif
#if 1
LZOCHK_ASSERT(__LZO_MASK_GEN(2,1) == 2)
LZOCHK_ASSERT(__LZO_MASK_GEN(7,3) == 7+14+28)
#endif
#if !(LZO_BROKEN_SIGNED_RIGHT_SHIFT)
LZOCHK_ASSERT(((-1) >> 7) == -1)
#endif
LZOCHK_ASSERT(((1)  >> 7) == 0)
#if (LZO_CC_INTELC && (__INTEL_COMPILER >= 900))
#  pragma warning(push)
#  pragma warning(disable: 1025)
#endif
LZOCHK_ASSERT((~0l  & ~0)  == ~0l)
LZOCHK_ASSERT((~0l  & ~0u) == ~0u)
LZOCHK_ASSERT((~0ul & ~0)  == ~0ul)
LZOCHK_ASSERT((~0ul & ~0u) == ~0u)
#if defined(__MSDOS__) && defined(__TURBOC__) && (__TURBOC__ < 0x0150)
#elif (LZO_SIZEOF_INT == 2)
LZOCHK_ASSERT((~0l  & ~0u) == 0xffffU)
LZOCHK_ASSERT((~0ul & ~0u) == 0xffffU)
#elif (LZO_SIZEOF_INT == 4)
#endif
#if defined(__cplusplus)
LZOCHK_ASSERT(sizeof('\0') == sizeof(char))
#else
#  if (LZO_CC_DMC)
#  else
LZOCHK_ASSERT(sizeof('\0') == sizeof(int))
#  endif
#endif
#if defined(__lzo_alignof)
LZOCHK_ASSERT(__lzo_alignof(char) == 1)
LZOCHK_ASSERT(__lzo_alignof(signed char) == 1)
LZOCHK_ASSERT(__lzo_alignof(unsigned char) == 1)
LZOCHK_ASSERT(sizeof(short) == sizeof(LZO_STATIC_CAST(short, 0)))
#endif
LZOCHK_ASSERT(sizeof(int) == sizeof(0))
LZOCHK_ASSERT(sizeof(int) == sizeof(LZO_STATIC_CAST(int, 0)))
#if (LZO_SIZEOF_INT > 0)
LZOCHK_ASSERT(sizeof(int) == LZO_SIZEOF_INT)
#endif
LZOCHK_ASSERT(sizeof(0) == sizeof(int))
LZOCHK_ASSERT_IS_SIGNED_T(long)
LZOCHK_ASSERT_IS_UNSIGNED_T(unsigned long)
LZOCHK_ASSERT(sizeof(long) == sizeof(unsigned long))
#if !(LZO_ABI_I8LP16)
LZOCHK_ASSERT(sizeof(long) >= 4)
#endif
LZOCHK_ASSERT(sizeof(long) >= sizeof(int))
LZOCHK_ASSERT(sizeof(long) == sizeof(0L))
LZOCHK_ASSERT(sizeof(long) == sizeof(LZO_STATIC_CAST(long, 0)))
#if (LZO_SIZEOF_LONG > 0)
LZOCHK_ASSERT(sizeof(long) == LZO_SIZEOF_LONG)
#endif
LZOCHK_ASSERT(sizeof(0L) == sizeof(long))
LZOCHK_ASSERT_IS_UNSIGNED_T(size_t)
LZOCHK_ASSERT(sizeof(size_t) >= sizeof(int))
LZOCHK_ASSERT(sizeof(size_t) == sizeof(sizeof(0)))
#if (LZO_SIZEOF_SIZE_T > 0)
LZOCHK_ASSERT(sizeof(size_t) == LZO_SIZEOF_SIZE_T)
#endif
LZOCHK_ASSERT_IS_SIGNED_T(ptrdiff_t)
LZOCHK_ASSERT(sizeof(ptrdiff_t) >= sizeof(int))
LZOCHK_ASSERT(sizeof(ptrdiff_t) >= sizeof(size_t))
#if !(LZO_BROKEN_SIZEOF)
LZOCHK_ASSERT(sizeof(void*) == LZO_SIZEOF_VOID_P)
LZOCHK_ASSERT(sizeof(char*) == LZO_SIZEOF_VOID_P)
#endif
#if (LZO_HAVE_MM_HUGE_PTR)
LZOCHK_ASSERT(4 == sizeof(void __huge*))
LZOCHK_ASSERT(4 == sizeof(char __huge*))
#endif
#if (LZO_ABI_I8LP16)
LZOCHK_ASSERT((((1u  <<  7) + 1) >>  7) == 1)
LZOCHK_ASSERT((((1ul << 15) + 1) >> 15) == 1)
#else
LZOCHK_ASSERT((((1u  << 15) + 1) >> 15) == 1)
LZOCHK_ASSERT((((1ul << 31) + 1) >> 31) == 1)
#endif
#if defined(LZOCHK_CFG_PEDANTIC)
#if defined(__MSDOS__) && defined(__TURBOC__) && (__TURBOC__ < 0x0150)
#else
LZOCHK_ASSERT((1   << (8*LZO_SIZEOF_INT-1)) < 0)
#endif
#endif
LZOCHK_ASSERT((1u  << (8*LZO_SIZEOF_INT-1)) > 0)
#if defined(LZOCHK_CFG_PEDANTIC)
LZOCHK_ASSERT((1l  << (8*LZO_SIZEOF_LONG-1)) < 0)
#endif
LZOCHK_ASSERT((1ul << (8*LZO_SIZEOF_LONG-1)) > 0)
#if defined(lzo_int16e_t)
LZOCHK_ASSERT(sizeof(lzo_int16e_t) == 2)
LZOCHK_ASSERT(sizeof(lzo_int16e_t) == LZO_SIZEOF_LZO_INT16E_T)
LZOCHK_ASSERT(sizeof(lzo_uint16e_t) == 2)
LZOCHK_ASSERT(sizeof(lzo_int16e_t) == sizeof(lzo_uint16e_t))
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int16e_t)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint16e_t)
#if defined(__MSDOS__) && defined(__TURBOC__) && (__TURBOC__ < 0x0150)
#else
LZOCHK_ASSERT((LZO_STATIC_CAST(lzo_uint16e_t, (~LZO_STATIC_CAST(lzo_uint16e_t,0ul))) >> 15) == 1)
#endif
LZOCHK_ASSERT( LZO_STATIC_CAST(lzo_int16e_t, (1 + ~LZO_STATIC_CAST(lzo_int16e_t, 0))) == 0)
#if defined(LZOCHK_CFG_PEDANTIC)
LZOCHK_ASSERT( LZO_STATIC_CAST(lzo_uint16e_t, (1 + ~LZO_STATIC_CAST(lzo_uint16e_t, 0))) == 0)
#endif
#endif
#if defined(lzo_int32e_t)
LZOCHK_ASSERT(sizeof(lzo_int32e_t) == 4)
LZOCHK_ASSERT(sizeof(lzo_int32e_t) == LZO_SIZEOF_LZO_INT32E_T)
LZOCHK_ASSERT(sizeof(lzo_uint32e_t) == 4)
#endif
#if defined(lzo_int32e_t)
LZOCHK_ASSERT(sizeof(lzo_int32l_t) >= sizeof(lzo_int32e_t))
#endif
LZOCHK_ASSERT(sizeof(lzo_int32l_t) >= 4)
LZOCHK_ASSERT(sizeof(lzo_int32l_t) == LZO_SIZEOF_LZO_INT32L_T)
LZOCHK_ASSERT(sizeof(lzo_uint32l_t) >= 4)
LZOCHK_ASSERT(sizeof(lzo_int32l_t) == sizeof(lzo_uint32l_t))
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int32l_t)
LZOCHK_ASSERT(((( LZO_STATIC_CAST(lzo_int32l_t, 1) << 30) + 1) >> 30) == 1)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint32l_t)
LZOCHK_ASSERT(((( LZO_STATIC_CAST(lzo_uint32l_t, 1) << 31) + 1) >> 31) == 1)
LZOCHK_ASSERT(sizeof(lzo_int32f_t) >= sizeof(int))
#if defined(lzo_int32e_t)
LZOCHK_ASSERT(sizeof(lzo_int32f_t) >= sizeof(lzo_int32e_t))
#endif
LZOCHK_ASSERT(sizeof(lzo_int32f_t) >= sizeof(lzo_int32l_t))
LZOCHK_ASSERT(sizeof(lzo_int32f_t) >= 4)
LZOCHK_ASSERT(sizeof(lzo_int32f_t) >= sizeof(lzo_int32l_t))
LZOCHK_ASSERT(sizeof(lzo_int32f_t) == LZO_SIZEOF_LZO_INT32F_T)
LZOCHK_ASSERT(sizeof(lzo_uint32f_t) >= 4)
LZOCHK_ASSERT(sizeof(lzo_uint32f_t) >= sizeof(lzo_uint32l_t))
LZOCHK_ASSERT(sizeof(lzo_int32f_t) == sizeof(lzo_uint32f_t))
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int32f_t)
LZOCHK_ASSERT(((( LZO_STATIC_CAST(lzo_int32f_t, 1) << 30) + 1) >> 30) == 1)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint32f_t)
LZOCHK_ASSERT(((( LZO_STATIC_CAST(lzo_uint32f_t, 1) << 31) + 1) >> 31) == 1)
#if defined(lzo_int64e_t)
LZOCHK_ASSERT(sizeof(lzo_int64e_t) == 8)
LZOCHK_ASSERT(sizeof(lzo_int64e_t) == LZO_SIZEOF_LZO_INT64E_T)
LZOCHK_ASSERT(sizeof(lzo_uint64e_t) == 8)
LZOCHK_ASSERT(sizeof(lzo_int64e_t) == sizeof(lzo_uint64e_t))
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int64e_t)
#if (LZO_CC_BORLANDC && (__BORLANDC__ < 0x0530))
#else
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint64e_t)
#endif
#endif
#if defined(lzo_int64l_t)
#if defined(lzo_int64e_t)
LZOCHK_ASSERT(sizeof(lzo_int64l_t) >= sizeof(lzo_int64e_t))
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint64l_t)
LZOCHK_ASSERT(LZO_UINT64_C(18446744073709551615)     > 0)
#endif
LZOCHK_ASSERT(((( LZO_STATIC_CAST(lzo_uint64l_t, 1) << 63) + 1) >> 63) == 1)
LZOCHK_ASSERT(((( LZO_UINT64_C(1) << 63) + 1) >> 63) == 1)
#if (LZO_CC_GNUC && (LZO_CC_GNUC < 0x020600ul))
LZOCHK_ASSERT(LZO_INT64_C(9223372036854775807)       > LZO_INT64_C(0))
#else
LZOCHK_ASSERT(LZO_INT64_C(9223372036854775807)       > 0)
#endif
#if (LZO_CC_BORLANDC && (__BORLANDC__ < 0x0530))
#else
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint64f_t)
#endif
#endif
#if !defined(__LZO_INTPTR_T_IS_POINTER)
LZOCHK_ASSERT_IS_SIGNED_T(lzo_intptr_t)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uintptr_t)
#endif
LZOCHK_ASSERT(sizeof(lzo_intptr_t) >= sizeof(void *))
LZOCHK_ASSERT(sizeof(lzo_uint8_t) == 1)
LZOCHK_ASSERT(sizeof(lzo_int8_t) == sizeof(lzo_uint8_t))
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int8_t)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint8_t)
#if defined(LZO_INT16_C)
LZOCHK_ASSERT(sizeof(LZO_INT16_C(0)) >= 2)
LZOCHK_ASSERT(sizeof(LZO_UINT16_C(0)) >= 2)
LZOCHK_ASSERT((LZO_UINT16_C(0xffff) >> 15) == 1)
#endif
#if defined(LZO_INT32_C)
LZOCHK_ASSERT(sizeof(LZO_INT32_C(0)) >= 4)
LZOCHK_ASSERT((LZO_UINT64_C(0xffffffffffffffff) & ~0)  == LZO_UINT64_C(0xffffffffffffffff))
LZOCHK_ASSERT((LZO_UINT64_C(0xffffffffffffffff) & ~0l) == LZO_UINT64_C(0xffffffffffffffff))
#if (LZO_SIZEOF_INT == 4)
# if (LZO_CC_GNUC && (LZO_CC_GNUC < 0x020000ul))
# else
LZOCHK_ASSERT((LZO_UINT64_C(0xffffffffffffffff) & (~0u+0u)) == 0xffffffffu)
# endif
#endif
#if (LZO_SIZEOF_LONG == 4)
# if (LZO_CC_GNUC && (LZO_CC_GNUC < 0x020000ul))
# else
LZOCHK_ASSERT((LZO_UINT64_C(0xffffffffffffffff) & (~0ul+0ul)) == 0xfffffffful)
# endif
#endif
#endif
#if (LZO_MM_TINY || LZO_MM_SMALL || LZO_MM_MEDIUM)
LZOCHK_ASSERT(sizeof(void*) == 2)
LZOCHK_ASSERT(sizeof(ptrdiff_t) == 2)
LZOCHK_ASSERT(sizeof(long) == 4)
LZOCHK_ASSERT(sizeof(void*) == 8)
LZOCHK_ASSERT(sizeof(ptrdiff_t) == sizeof(void*))
LZOCHK_ASSERT(sizeof(size_t) == sizeof(void*))
LZOCHK_ASSERT(sizeof(lzo_intptr_t) == sizeof(void *))
#endif
#if (LZO_ABI_LP32)
LZOCHK_ASSERT(sizeof(int) == 2)
LZOCHK_ASSERT(sizeof(long) == 4)
LZOCHK_ASSERT(sizeof(void*) == 4)
LZOCHK_ASSERT(sizeof(lzo_intptr_t) == sizeof(void *))
#endif
#if (LZO_ABI_LP64)
LZOCHK_ASSERT(sizeof(int) == 4)
LZOCHK_ASSERT(sizeof(long) == 8)
LZOCHK_ASSERT(sizeof(void*) == 8)
LZOCHK_ASSERT(sizeof(ptrdiff_t) == sizeof(void*))
LZOCHK_ASSERT(sizeof(size_t) == sizeof(void*))
LZOCHK_ASSERT(sizeof(lzo_intptr_t) == sizeof(void *))
#endif
#if (LZO_ABI_IP32W64)
#endif
#if (LZO_CC_NDPC)
#elif (LZO_SIZEOF_INT > 1)
LZOCHK_ASSERT( LZO_STATIC_CAST(int, LZO_STATIC_CAST(unsigned char, LZO_STATIC_CAST(signed char, -1))) == 255)
#endif
#if defined(LZOCHK_CFG_PEDANTIC)
#if (LZO_CC_KEILC)
#elif (LZO_CC_NDPC)
#elif !(LZO_BROKEN_INTEGRAL_PROMOTION) && (LZO_SIZEOF_INT > 1)
LZOCHK_ASSERT( ((LZO_STATIC_CAST(unsigned char, 128)) << LZO_STATIC_CAST(int, (8*sizeof(int)-8))) < 0)
#endif
#endif
#if defined(LZOCHK_CFG_PEDANTIC)
#if (LZO_CC_BORLANDC && (__BORLANDC__ >= 0x0530) && (__BORLANDC__ < 0x0560))
#  pragma option pop
#endif
#endif
#endif
#if defined(LZO_WANT_ACCLIB_VGET)
#  undef LZO_WANT_ACCLIB_VGET

#if !defined(LZOLIB_PUBLIC)

#endif
#if !defined(LZOLIB_PUBLIC_NOINLINE)
#  if !defined(__lzo_noinline)
#    define LZOLIB_PUBLIC_NOINLINE(r,f)     r __LZOLIB_FUNCNAME(f)

#    define LZOLIB_PUBLIC_NOINLINE(r,f)     __lzo_noinline __attribute__((__used__)) r __LZOLIB_FUNCNAME(f)
#  else
#    define LZOLIB_PUBLIC_NOINLINE(r,f)     __lzo_noinline r __LZOLIB_FUNCNAME(f)
#  endif
} \
return v;
#endif
LZOLIB_PUBLIC_NOINLINE(short, lzo_vget_short) (short v, int expr)
{
__LZOLIB_VGET_BODY(short)
}
LZOLIB_PUBLIC_NOINLINE(int, lzo_vget_int) (int v, int expr)
{
__LZOLIB_VGET_BODY(int)
}
LZOLIB_PUBLIC_NOINLINE(long, lzo_vget_long) (long v, int expr)
{
__LZOLIB_VGET_BODY(long)
}
#if defined(lzo_int64l_t)
LZOLIB_PUBLIC_NOINLINE(lzo_int64l_t, lzo_vget_lzo_int64l_t) (lzo_int64l_t v, int expr)
{
__LZOLIB_VGET_BODY(lzo_int64l_t)
}
#endif
LZOLIB_PUBLIC_NOINLINE(lzo_hsize_t, lzo_vget_lzo_hsize_t) (lzo_hsize_t v, int expr)
{
__LZOLIB_VGET_BODY(lzo_hsize_t)
}
#if !(LZO_CFG_NO_DOUBLE)
LZOLIB_PUBLIC_NOINLINE(double, lzo_vget_double) (double v, int expr)
{
__LZOLIB_VGET_BODY(double)
}
{
__LZOLIB_VGET_BODY(const lzo_hvoid_p)
}
#endif
#endif
#if defined(LZO_WANT_ACCLIB_HMEMCPY)


#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
LZOLIB_PUBLIC(int, lzo_hmemcmp) (const lzo_hvoid_p s1, const lzo_hvoid_p s2, lzo_hsize_t len)
{
int d = *p1 - *p2;
if (d != 0)
return d;
p1++; p2++;
}
LZOLIB_PUBLIC(lzo_hvoid_p, lzo_hmemcpy) (lzo_hvoid_p dest, const lzo_hvoid_p src, lzo_hsize_t len)
{
#if (LZO_HAVE_MM_HUGE_PTR) || !(HAVE_MEMCPY)
lzo_hbyte_p p1 = LZO_STATIC_CAST(lzo_hbyte_p, dest);
const lzo_hbyte_p p2 = LZO_STATIC_CAST(const lzo_hbyte_p, src);
if (!(len > 0) || p1 == p2)
return dest;
do
*p1++ = *p2++;
while __lzo_likely(--len > 0);
return dest;
#else
return memcpy(dest, src, len);
#endif
}
LZOLIB_PUBLIC(lzo_hvoid_p, lzo_hmemmove) (lzo_hvoid_p dest, const lzo_hvoid_p src, lzo_hsize_t len)
{}
LZOLIB_PUBLIC(lzo_hvoid_p, lzo_hmemset) (lzo_hvoid_p s, int cc, lzo_hsize_t len)
{
#if (LZO_HAVE_MM_HUGE_PTR) || !(HAVE_MEMSET)
lzo_hbyte_p p = LZO_STATIC_CAST(lzo_hbyte_p, s);
unsigned char c = LZO_ITRUNC(unsigned char, cc);
if __lzo_likely(len > 0) do
*p++ = c;
while __lzo_likely(--len > 0);
return s;
#else
return memset(s, cc, len);
#endif
return r->seed;
}
#if defined(lzo_int64l_t)
LZOLIB_PUBLIC(void, lzo_srand48) (lzo_rand48_p r, lzo_uint32l_t seed)
{}
LZOLIB_PUBLIC(lzo_uint32l_t, lzo_rand48) (lzo_rand48_p r)
{}
LZOLIB_PUBLIC(lzo_uint32l_t, lzo_rand48_r32) (lzo_rand48_p r)
{}
#endif
#if defined(lzo_int64l_t)
LZOLIB_PUBLIC(void, lzo_srand64) (lzo_rand64_p r, lzo_uint64l_t seed)
{}
LZOLIB_PUBLIC(lzo_uint32l_t, lzo_rand64) (lzo_rand64_p r)
{
lzo_uint64l_t a;
r->seed = r->seed * LZO_UINT64_C(6364136223846793005) + 1;
#if (LZO_SIZEOF_LZO_INT64L_T > 8)
r->seed &= LZO_UINT64_C(0xffffffffffffffff);
#endif
a = r->seed >> 33;
return LZO_STATIC_CAST(lzo_uint32l_t, a);
}
LZOLIB_PUBLIC(lzo_uint32l_t, lzo_rand64_r32) (lzo_rand64_p r)
{
lzo_uint64l_t a;
r->seed = r->seed * LZO_UINT64_C(6364136223846793005) + 1;
#if (LZO_SIZEOF_LZO_INT64L_T > 8)
r->seed &= LZO_UINT64_C(0xffffffffffffffff);
#endif
a = r->seed >> 32;
return LZO_STATIC_CAST(lzo_uint32l_t, a);
}
r->s[i++] = (seed &= LZO_UINT64_C(0xffffffffffffffff));
seed ^= seed >> 62;
seed = seed * LZO_UINT64_C(0x5851f42d4c957f2d) + i;
{}
#endif
#endif
#if defined(LZO_WANT_ACCLIB_RDTSC)
#  undef LZO_WANT_ACCLIB_RDTSC
#define __LZOLIB_RDTSC_CH_INCLUDED 1
#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
#if defined(lzo_int32e_t)
#if (LZO_OS_WIN32 && LZO_CC_PELLESC && (__POCC__ >= 290))
#  pragma warn(push)
#  pragma warn(disable:2007)
#endif
#if (LZO_ARCH_AMD64 || LZO_ARCH_I386) && (LZO_ASM_SYNTAX_GNUC)
#if (LZO_ARCH_AMD64 && LZO_CC_INTELC)

#elif (LZO_ARCH_AMD64)
#  define __LZOLIB_RDTSC_REGS   : : "c" (t) : "cc", "memory", "rax", "rdx"
#elif (LZO_ARCH_I386 && LZO_CC_GNUC && (LZO_CC_GNUC < 0x020000ul))
#  define __LZOLIB_RDTSC_REGS   : : "c" (t) : "ax", "dx"


#else
#  define __LZOLIB_RDTSC_REGS   : : "c" (t) : "cc", "memory", "eax", "edx"
#endif
#endif
LZOLIB_PUBLIC(int, lzo_tsc_read) (lzo_uint32e_t* t)
{}
#if (LZO_OS_WIN32 && LZO_CC_PELLESC && (__POCC__ >= 290))
#  pragma warn(pop)
#endif
#endif
#endif
#if defined(LZO_WANT_ACCLIB_DOSALLOC)
#  undef LZO_WANT_ACCLIB_DOSALLOC

#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
#if (LZO_OS_OS216)
LZO_EXTERN_C unsigned short __far __pascal DosAllocHuge(unsigned short, unsigned short, unsigned short __far *, unsigned short, unsigned short);
LZO_EXTERN_C unsigned short __far __pascal DosFreeSeg(unsigned short);
#endif
#if (LZO_OS_DOS16 || LZO_OS_WIN16)
#if !(LZO_CC_AZTECC)
LZOLIB_PUBLIC(void __far*, lzo_dos_alloc) (unsigned long size)
{
void __far* p = 0;
struct SREGS rs;
if (!p)
return 0;
#endif
#endif
#if (LZO_OS_OS216)
LZOLIB_PUBLIC(void __far*, lzo_dos_alloc) (unsigned long size)
{
if (!p)
return 0;
if (LZO_PTR_FP_OFF(p) != 0)
return -1;
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
LZOLIB_PUBLIC(void, lzo_getopt_init) (lzo_getopt_p g,
middle = i;
#  undef LZO_WANT_ACCLIB_HALLOC
#define __LZOLIB_HALLOC_CH_INCLUDED 1
#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
#if (LZO_HAVE_MM_HUGE_PTR)
#if 1 && (LZO_OS_DOS16 && defined(BLX286))
LZO_EXTERN_C const void __near* __far __pascal GlobalFree(const void __near*);
LZO_EXTERN_C unsigned long __far __pascal GlobalHandle(unsigned);
LZO_EXTERN_C void __far* __far __pascal GlobalLock(const void __near*);
LZO_EXTERN_C int __far __pascal GlobalUnlock(const void __near*);
#endif
#endif
LZOLIB_PUBLIC(lzo_hvoid_p, lzo_halloc) (lzo_hsize_t size)
{}
LZOLIB_PUBLIC(void, lzo_hfree) (lzo_hvoid_p p)
{
GlobalUnlock(h);
GlobalFree(h);
}
#endif
#if defined(LZO_WANT_ACCLIB_HFREAD)
#  undef LZO_WANT_ACCLIB_HFREAD
#define __LZOLIB_HFREAD_CH_INCLUDED 1
#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
LZOLIB_PUBLIC(lzo_hsize_t, lzo_hfread) (void* vfp, lzo_hvoid_p buf, lzo_hsize_t size)
#  undef LZO_WANT_ACCLIB_PCLOCK
#define __LZOLIB_PCLOCK_CH_INCLUDED 1
#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)    r __LZOLIB_FUNCNAME(f)
#endif
#if 1 && (LZO_OS_POSIX_LINUX && LZO_ARCH_AMD64 && LZO_ASM_SYNTAX_GNUC && !LZO_CFG_NO_SYSCALL)
{
{}
#endif
#if (HAVE_GETTIMEOFDAY)
#ifndef lzo_pclock_read_gettimeofday
c->tv_sec_low = LZO_STATIC_CAST(lzo_uint32l_t, (secs + 0.5));
c->tv_nsec = 0;
#endif
LZO_UNUSED(h); return 0;
}
#endif
#if 1 && defined(lzo_pclock_syscall_clock_gettime)
#ifndef lzo_pclock_read_clock_gettime_m_syscall
#define lzo_pclock_read_clock_gettime_m_syscall lzo_pclock_read_clock_gettime_m_syscall
#endif
struct timespec ts;
if (clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts) != 0)
return -1;
c->tv_sec = ts.tv_sec;
c->tv_nsec = LZO_STATIC_CAST(lzo_uint32l_t, ts.tv_nsec);
LZO_UNUSED(h); return 0;
}
#endif
#if 1 && defined(lzo_pclock_syscall_clock_gettime)
#ifndef lzo_pclock_read_clock_gettime_p_syscall
#define lzo_pclock_read_clock_gettime_p_syscall lzo_pclock_read_clock_gettime_p_syscall
#endif
static int lzo_pclock_read_clock_gettime_p_syscall(lzo_pclock_handle_p h, lzo_pclock_p c)
{}
#endif
#if (LZO_OS_CYGWIN || LZO_OS_WIN32 || LZO_OS_WIN64) && (LZO_HAVE_WINDOWS_H) && defined(lzo_int64l_t)
#ifndef lzo_pclock_read_getprocesstimes
#define lzo_pclock_read_getprocesstimes lzo_pclock_read_getprocesstimes
#endif
static int lzo_pclock_read_getprocesstimes(lzo_pclock_handle_p h, lzo_pclock_p c)
{
FILETIME ct, et, kt, ut;
lzo_uint64l_t ticks;
if (GetProcessTimes(GetCurrentProcess(), &ct, &et, &kt, &ut) == 0)
return -1;
ticks = (LZO_STATIC_CAST(lzo_uint64l_t, ut.dwHighDateTime) << 32) | ut.dwLowDateTime;
if __lzo_unlikely(h->ticks_base == 0)
h->ticks_base = ticks;
else
ticks -= h->ticks_base;
c->tv_sec = LZO_STATIC_CAST(lzo_int64l_t, (ticks / 10000000ul));
LZO_UNUSED(h); return 0;
#ifndef lzo_pclock_read_clock_gettime_t_syscall
#define lzo_pclock_read_clock_gettime_t_syscall lzo_pclock_read_clock_gettime_t_syscall
#endif
static int lzo_pclock_read_clock_gettime_t_syscall(lzo_pclock_handle_p h, lzo_pclock_p c)
{}
#endif
#if (LZO_OS_CYGWIN || LZO_OS_WIN32 || LZO_OS_WIN64) && (LZO_HAVE_WINDOWS_H) && defined(lzo_int64l_t)
#ifndef lzo_pclock_read_getthreadtimes
#define lzo_pclock_read_getthreadtimes lzo_pclock_read_getthreadtimes
#endif
static int lzo_pclock_read_getthreadtimes(lzo_pclock_handle_p h, lzo_pclock_p c)
{
ticks = (ticks % 10000000ul) * 100u;
c->tv_nsec = LZO_STATIC_CAST(lzo_uint32l_t, ticks);
LZO_UNUSED(h); return 0;
}
#endif
LZOLIB_PUBLIC(int, lzo_pclock_open) (lzo_pclock_handle_p h, int mode)
{}
LZOLIB_PUBLIC(int, lzo_pclock_open_default) (lzo_pclock_handle_p h)
{
if (__LZOLIB_FUNCNAME(lzo_pclock_open)(h, LZO_PCLOCK_PROCESS_CPUTIME_ID) == 0)
return 0;
if (__LZOLIB_FUNCNAME(lzo_pclock_open)(h, LZO_PCLOCK_MONOTONIC) == 0)
return 0;
if (__LZOLIB_FUNCNAME(lzo_pclock_open)(h, LZO_PCLOCK_REALTIME) == 0)
return 0;
if (__LZOLIB_FUNCNAME(lzo_pclock_open)(h, LZO_PCLOCK_THREAD_CPUTIME_ID) == 0)
return 0;
return -1;
{
LZO_UNUSED(h); LZO_UNUSED(flags);
return -1;
}
#endif
#if defined(LZO_WANT_ACCLIB_MISC)

#define __LZOLIB_MISC_CH_INCLUDED 1
#if !defined(LZOLIB_PUBLIC)
#  define LZOLIB_PUBLIC(r,f)                r __LZOLIB_FUNCNAME(f)
#endif
#if !defined(LZOLIB_PUBLIC_NOINLINE)
#  if !defined(__lzo_noinline)


#    define LZOLIB_PUBLIC_NOINLINE(r,f)     __lzo_noinline __attribute__((__used__)) r __LZOLIB_FUNCNAME(f)
#  else
#    define LZOLIB_PUBLIC_NOINLINE(r,f)     __lzo_noinline r __LZOLIB_FUNCNAME(f)
#  endif
#endif
#if (LZO_OS_WIN32 && LZO_CC_PELLESC && (__POCC__ >= 290))
#  pragma warn(push)
#  pragma warn(disable:2007)
#endif
LZOLIB_PUBLIC(const char *, lzo_getenv) (const char *s)
{
#if (HAVE_GETENV)
return getenv(s);
#else
LZO_UNUSED(s); return LZO_STATIC_CAST(const char *, 0);
#endif
}
LZOLIB_PUBLIC(lzo_intptr_t, lzo_get_osfhandle) (int fd)
{
if (fd < 0)
return -1;
#if (LZO_OS_CYGWIN)
return get_osfhandle(fd);

return -1;

return -1;
#elif (LZO_OS_WIN32 || LZO_OS_WIN64)
# if (LZO_CC_PELLESC && (__POCC__ < 280))
return -1;

return -1;
# elif (LZO_CC_WATCOMC && (__WATCOMC__ < 1100))
return _os_handle(fd);
# else
return _get_osfhandle(fd);
# endif
#else
return fd;
#endif
}
LZOLIB_PUBLIC(int, lzo_set_binmode) (int fd, int binary)
{}
LZOLIB_PUBLIC(int, lzo_isatty) (int fd)
{}
LZOLIB_PUBLIC(int, lzo_mkdir) (const char* name, unsigned mode)
{
#if !(HAVE_MKDIR)
#if defined(lzo_int64l_t)
lzo_int64l_t rr = (LZO_ICONV(lzo_int64l_t, a) * b) / x;
r = LZO_ITRUNC(lzo_int32e_t, rr);
#else
LZO_UNUSED(a); LZO_UNUSED(b);
#endif
}
LZOLIB_PUBLIC(lzo_uint32e_t, lzo_muldiv32u) (lzo_uint32e_t a, lzo_uint32e_t b, lzo_uint32e_t x)
{
#if defined(lzo_int64l_t)
lzo_uint64l_t rr = (LZO_ICONV(lzo_uint64l_t, a) * b) / x;
r = LZO_ITRUNC(lzo_uint32e_t, rr);
#else
LZO_UNUSED(a); LZO_UNUSED(b);
#endif
}
#endif
#if (LZO_OS_WIN16)
LZO_EXTERN_C void __far __pascal DebugBreak(void);
#endif
LZOLIB_PUBLIC_NOINLINE(void, lzo_debug_break) (void)
{ int 3 }
LZOLIB_PUBLIC_NOINLINE(void, lzo_debug_nop) (void)
{
}
LZOLIB_PUBLIC_NOINLINE(int, lzo_debug_align_check_query) (void)
{
#if (LZO_ARCH_AMD64 && LZO_ABI_ILP32)
return 0;
#elif (LZO_ARCH_AMD64 || LZO_ARCH_I386) && (LZO_ASM_SYNTAX_GNUC)
volatile size_t a[6];
size_t r = 0;
a[0] = 0x1001; a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0; a[5] = 0;
#  if (LZO_ARCH_AMD64)
__asm__ __volatile__(".byte 0x48,0xc1,0xc7,0x03,0x48,0xc1,0xc7,0x0d,0x48,0xc1,0xc7,0x3d,0x48,0xc1,0xc7,0x33,0x48,0x87,0xdb\n" : "=d" (r) : "a" (&a[0]), "d""" : "=d" (r) : "a" (&a[0]), "d" (r) __LZO_ASM_CLOBBER_LIST_CC_MEMORY);
#  endif
return LZO_ITRUNC(unsigned, r);
#else
return 0;
#endif
}
#if (LZO_OS_WIN32 && LZO_CC_PELLESC && (__POCC__ >= 290))
#  pragma warn(pop)
#endif
#endif
#if defined(LZO_WANT_ACCLIB_WILDARGV)
#  undef LZO_WANT_ACCLIB_WILDARGV
#define __LZOLIB_WILDARGV_CH_INCLUDED 1
#if (LZO_OS_WIN32 || LZO_OS_WIN64)
#if (LZO_CC_MSC && (_MSC_VER >= 1900))

LZO_EXTERN_C int __lzo_cdecl __setargv(void);
LZO_EXTERN_C int __lzo_cdecl _setargv(void);
LZO_EXTERN_C int __lzo_cdecl _setargv(void) { return __setargv(); }
#endif
#endif
#if (LZO_OS_EMX)

LZOLIB_PUBLIC(void, lzo_wildargv) (int* argc, char*** argv)
{}
#endif
#if (LZO_OS_CONSOLE_PSP) && defined(__PSPSDK_DEBUG__)

LZO_EXTERN_C int lzo_psp_init_module(int*, char***, int);
LZOLIB_PUBLIC(void, lzo_wildargv) (int* argc, char*** argv)
{
lzo_psp_init_module(argc, argv, -1);
}
#endif
#if !(__LZOLIB_HAVE_LZO_WILDARGV)
#define __LZOLIB_HAVE_LZO_WILDARGV 1
LZOLIB_PUBLIC(void, lzo_wildargv) (int* argc, char*** argv)
{ exit(1); }
#endif
#endif



