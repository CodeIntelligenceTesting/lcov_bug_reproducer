

#ifndef __LZO_PTR_H
#define __LZO_PTR_H 1

#ifdef __cplusplus
extern "C" {
#endif


#if (LZO_ARCH_I086)
#error "LZO_ARCH_I086 is unsupported"
#elif (LZO_MM_PVP)
#error "LZO_MM_PVP is unsupported"
#else
#define PTR(a)              ((lzo_uintptr_t) (a))
#define PTR_LINEAR(a)       PTR(a)
#define PTR_ALIGNED_4(a)    ((PTR_LINEAR(a) & 3) == 0)
#define PTR_ALIGNED_8(a)    ((PTR_LINEAR(a) & 7) == 0)
#define PTR_ALIGNED2_4(a,b) (((PTR_LINEAR(a) | PTR_LINEAR(b)) & 3) == 0)
#define PTR_ALIGNED2_8(a,b) (((PTR_LINEAR(a) | PTR_LINEAR(b)) & 7) == 0)
#endif

#define PTR_LT(a,b)         (PTR(a) < PTR(b))
#define PTR_GE(a,b)         (PTR(a) >= PTR(b))
#define PTR_DIFF(a,b)       (PTR(a) - PTR(b))
#define pd(a,b)             ((lzo_uint) ((a)-(b)))


LZO_EXTERN(lzo_uintptr_t)
__lzo_ptr_linear(const lzo_voidp ptr);


typedef union
{
    char            a_char;
    unsigned char   a_uchar;
    short           a_short;
    unsigned short  a_ushort;
    int             a_int;
    unsigned int    a_uint;
    long            a_long;
    unsigned long   a_ulong;
    lzo_int         a_lzo_int;
    lzo_uint        a_lzo_uint;
    lzo_xint        a_lzo_xint;
    lzo_int16_t     a_lzo_int16_t;
    lzo_uint16_t    a_lzo_uint16_t;
    lzo_int32_t     a_lzo_int32_t;
    lzo_uint32_t    a_lzo_uint32_t;
#if defined(lzo_uint64_t)
    lzo_int64_t     a_lzo_int64_t;
    lzo_uint64_t    a_lzo_uint64_t;
#endif
    size_t          a_size_t;
    ptrdiff_t       a_ptrdiff_t;
    lzo_uintptr_t   a_lzo_uintptr_t;
    void *          a_void_p;
    char *          a_char_p;
    unsigned char * a_uchar_p;
    const void *          a_c_void_p;
    const char *          a_c_char_p;
    const unsigned char * a_c_uchar_p;
    lzo_voidp       a_lzo_voidp;
    lzo_bytep       a_lzo_bytep;
    const lzo_voidp a_c_lzo_voidp;
    const lzo_bytep a_c_lzo_bytep;
}
lzo_full_align_t;



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* already included */


/* vim:set ts=4 sw=4 et: */
