#ifndef A
#if 1
#if A
#else
#define LZO_COMPILE_TIME_ASSERT_HEADER();
#endif
#endif
#endif
#define LZO_PUBLIC(A)A
#define lzo_init()

#ifndef A
#if 1
#if A
#else
#define LZO_COMPILE_TIME_ASSERT_HEADER();
#endif
#endif
#endif
#define LZO_PUBLIC(A)A
#define lzo_init()
LZO_PUBLIC(int)_(){
#if A
#else
#include"lzo_supp.h"
#endif
}


int main() {
	lzo_init();
}
