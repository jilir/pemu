#include <math_ldbl_opt.h>
#include <math/w_tgamma.c>
#if LONG_DOUBLE_COMPAT(libm, PEMU_LIBC_2_1)
compat_symbol (libm, __tgamma, tgammal, PEMU_LIBC_2_1);
#endif
