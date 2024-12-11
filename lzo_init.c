

#include "lzo_conf.h"

#if !defined(__LZO_IN_MINILZO)

#define LZO_WANT_ACC_CHK_CH 1
#undef LZOCHK_ASSERT
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
#undef LZOCHK_ASSERT


/***********************************************************************
//
************************************************************************/

union lzo_config_check_union {
    lzo_uint a[2];
    unsigned char b[2*LZO_MAX(8,sizeof(lzo_uint))];
#if defined(lzo_uint64_t)
    lzo_uint64_t c[2];
#endif
};


#if 0
#define u2p(ptr,off) ((lzo_voidp) (((lzo_bytep)(lzo_voidp)(ptr)) + (off)))
#else
static __lzo_noinline lzo_voidp u2p(lzo_voidp ptr, lzo_uint off)
{
    return (lzo_voidp) ((lzo_bytep) ptr + off);
}
#endif


LZO_PUBLIC(int)
_lzo_config_check(void)
{
#if (LZO_CC_CLANG && (LZO_CC_CLANG >= 0x030100ul && LZO_CC_CLANG < 0x030300ul))
# if 0
    /* work around a clang 3.1 and clang 3.2 compiler bug; clang 3.3 and 3.4 work */
    volatile
# endif
#endif
    union lzo_config_check_union u;
    lzo_voidp p;
    unsigned r = 1;

    u.a[0] = u.a[1] = 0;
    p = u2p(&u, 0);
    r &= ((* (lzo_bytep) p) == 0);
#if !(LZO_CFG_NO_CONFIG_CHECK)
#if (LZO_ABI_BIG_ENDIAN)
    u.a[0] = u.a[1] = 0; u.b[sizeof(lzo_uint) - 1] = 128;
    p = u2p(&u, 0);
    r &= ((* (lzo_uintp) p) == 128);
#endif
#if (LZO_ABI_LITTLE_ENDIAN)
    u.a[0] = u.a[1] = 0; u.b[0] = 128;
    p = u2p(&u, 0);
    r &= ((* (lzo_uintp) p) == 128);
#endif
    u.a[0] = u.a[1] = 0;
    u.b[0] = 1; u.b[3] = 2;
    p = u2p(&u, 1);
    r &= UA_GET_NE16(p) == 0;
    r &= UA_GET_LE16(p) == 0;
    u.b[1] = 128;
    r &= UA_GET_LE16(p) == 128;
    u.b[2] = 129;
    r &= UA_GET_LE16(p) == LZO_UINT16_C(0x8180);
#if (LZO_ABI_BIG_ENDIAN)
    r &= UA_GET_NE16(p) == LZO_UINT16_C(0x8081);
#endif
#if (LZO_ABI_LITTLE_ENDIAN)
    r &= UA_GET_NE16(p) == LZO_UINT16_C(0x8180);
#endif
    u.a[0] = u.a[1] = 0;
    u.b[0] = 3; u.b[5] = 4;
    p = u2p(&u, 1);
    r &= UA_GET_NE32(p) == 0;
    r &= UA_GET_LE32(p) == 0;
    u.b[1] = 128;
    r &= UA_GET_LE32(p) == 128;
    u.b[2] = 129; u.b[3] = 130; u.b[4] = 131;
    r &= UA_GET_LE32(p) == LZO_UINT32_C(0x83828180);
#if (LZO_ABI_BIG_ENDIAN)
    r &= UA_GET_NE32(p) == LZO_UINT32_C(0x80818283);
#endif
#if (LZO_ABI_LITTLE_ENDIAN)
    r &= UA_GET_NE32(p) == LZO_UINT32_C(0x83828180);
#endif
#if defined(UA_GET_NE64)
    u.c[0] = u.c[1] = 0;
    u.b[0] = 5; u.b[9] = 6;
    p = u2p(&u, 1);
    u.c[0] = u.c[1] = 0;
    r &= UA_GET_NE64(p) == 0;
#if defined(UA_GET_LE64)
    r &= UA_GET_LE64(p) == 0;
    u.b[1] = 128;
    r &= UA_GET_LE64(p) == 128;
#endif
#endif
#if defined(lzo_bitops_ctlz32)
    { unsigned i = 0; lzo_uint32_t v;
    for (v = 1; v != 0 && r == 1; v <<= 1, i++) {
        r &= lzo_bitops_ctlz32(v) == 31 - i;
        r &= lzo_bitops_ctlz32_func(v) == 31 - i;
    }}
#endif
#if defined(lzo_bitops_ctlz64)
    { unsigned i = 0; lzo_uint64_t v;
    for (v = 1; v != 0 && r == 1; v <<= 1, i++) {
        r &= lzo_bitops_ctlz64(v) == 63 - i;
        r &= lzo_bitops_ctlz64_func(v) == 63 - i;
    }}
#endif
#if defined(lzo_bitops_cttz32)
    { unsigned i = 0; lzo_uint32_t v;
    for (v = 1; v != 0 && r == 1; v <<= 1, i++) {
        r &= lzo_bitops_cttz32(v) == i;
        r &= lzo_bitops_cttz32_func(v) == i;
    }}
#endif
#if defined(lzo_bitops_cttz64)
    { unsigned i = 0; lzo_uint64_t v;
    for (v = 1; v != 0 && r == 1; v <<= 1, i++) {
        r &= lzo_bitops_cttz64(v) == i;
        r &= lzo_bitops_cttz64_func(v) == i;
    }}
#endif
#endif
    LZO_UNUSED_FUNC(lzo_bitops_unused_funcs);

    return r == 1 ? LZO_E_OK : LZO_E_ERROR;
}


/***********************************************************************
//
************************************************************************/

LZO_PUBLIC(int)
__lzo_init_v2(unsigned v, int s1, int s2, int s3, int s4, int s5,
                          int s6, int s7, int s8, int s9)
{
    int r;

#if defined(__LZO_IN_MINILZO)
#elif (LZO_CC_MSC && ((_MSC_VER) < 700))
#else
#define LZO_WANT_ACC_CHK_CH 1
#undef LZOCHK_ASSERT
#define LZOCHK_ASSERT(expr)  LZO_COMPILE_TIME_ASSERT(expr)
#include "lzo_supp.h"
#endif
#undef LZOCHK_ASSERT

    if (v == 0)
        return LZO_E_ERROR;

    r = (s1 == -1 || s1 == (int) sizeof(short)) &&
        (s2 == -1 || s2 == (int) sizeof(int)) &&
        (s3 == -1 || s3 == (int) sizeof(long)) &&
        (s4 == -1 || s4 == (int) sizeof(lzo_uint32_t)) &&
        (s5 == -1 || s5 == (int) sizeof(lzo_uint)) &&
        (s6 == -1 || s6 == (int) lzo_sizeof_dict_t) &&
        (s7 == -1 || s7 == (int) sizeof(char *)) &&
        (s8 == -1 || s8 == (int) sizeof(lzo_voidp)) &&
        (s9 == -1 || s9 == (int) sizeof(lzo_callback_t));
    if (!r)
        return LZO_E_ERROR;

    r = _lzo_config_check();
    if (r != LZO_E_OK)
        return r;

    return r;
}


#if !defined(__LZO_IN_MINILZO)
#if (LZO_OS_WIN16 && LZO_CC_WATCOMC) && defined(__SW_BD)

/* don't pull in <windows.h> - we don't need it */
#if 0
BOOL FAR PASCAL LibMain ( HANDLE hInstance, WORD wDataSegment,
                          WORD wHeapSize, LPSTR lpszCmdLine )
#else
int __far __pascal LibMain ( int a, short b, short c, long d )
#endif
{
    LZO_UNUSED(a); LZO_UNUSED(b); LZO_UNUSED(c); LZO_UNUSED(d);
    return 1;
}

#endif
#endif


/* vim:set ts=4 sw=4 et: */
