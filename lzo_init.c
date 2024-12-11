#include "lzo_conf.h"
#if !defined(__LZO_IN_MINILZO)
#define LZO_WANT_ACC_CHK_CH 1
#include "lzo_supp.h"
LZOCHK_ASSERT((LZO_UINT32_C(1) << (int)(8*sizeof(LZO_UINT32_C(1))-1)) > 0)
LZOCHK_ASSERT_IS_SIGNED_T(lzo_int)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uint)
#if !(__LZO_UINTPTR_T_IS_POINTER)
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_uintptr_t)
#endif
LZOCHK_ASSERT(sizeof(lzo_uintptr_t) >= sizeof(lzo_voidp))
LZOCHK_ASSERT_IS_UNSIGNED_T(lzo_xint)
#endif
union lzo_config_check_union {};
#if 0
#define u2p(ptr,off) ((lzo_voidp) (((lzo_bytep)(lzo_voidp)(ptr)) + (off)))
static __lzo_noinline lzo_voidp u2p(lzo_voidp ptr, lzo_uint off)
{}
#endif
LZO_PUBLIC(int)
_lzo_config_check(void)
{}
LZO_PUBLIC(int)
__lzo_init_v2(unsigned v, int s1, int s2, int s3, int s4, int s5,
int s6, int s7, int s8, int s9)
{
int r;
#if defined(__LZO_IN_MINILZO)
#elif (LZO_CC_MSC && ((_MSC_VER) < 700))
#else
#define LZO_WANT_ACC_CHK_CH 1
#define LZOCHK_ASSERT(expr)LZO_COMPILE_TIME_ASSERT(expr)
#include "lzo_supp.h"
#endif
#undef LZOCHK_ASSERTif (v == 0)
r = (s1 == -1 || s1 == (int) sizeof(short)) &&
(s2 == -1 || s2 == (int) sizeof(int)) &&
(s3 == -1 || s3 == (int) sizeof(long)) &&
(s4 == -1 || s4 == (int) sizeof(lzo_uint32_t)) &&
(s5 == -1 || s5 == (int) sizeof(lzo_uint)) &&
(s6 == -1 || s6 == (int) lzo_sizeof_dict_t) &&
(s7 == -1 || s7 == (int) sizeof(char *)) &&
(s9 == -1 || s9 == (int) sizeof(lzo_callback_t));
return r;
}
#if !defined(__LZO_IN_MINILZO)
#if (LZO_OS_WIN16 && LZO_CC_WATCOMC) && defined(__SW_BD)
#if 0
BOOL FAR PASCAL LibMain ( HANDLE hInstance, WORD wDataSegment,
WORD wHeapSize, LPSTR lpszCmdLine )
int __far __pascal LibMain ( int a, short b, short c, long d )
#endif
{}
#endif
#endif