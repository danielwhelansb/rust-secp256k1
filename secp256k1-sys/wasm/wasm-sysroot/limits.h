#ifndef WASM_SYSROOT_LIMITS_H
#define WASM_SYSROOT_LIMITS_H

#define CHAR_BIT __CHAR_BIT__

/* If the compiler doesn't expose __UINT_MAX__, synthesize it from __INT_MAX__. */
#ifndef __UINT_MAX__
#  define __UINT_MAX__ ((unsigned int)(__INT_MAX__ * 2U + 1U))
#endif

#define SCHAR_MIN  (-__SCHAR_MAX__ - 1)
#define SCHAR_MAX  __SCHAR_MAX__
#define UCHAR_MAX  __UCHAR_MAX__

#define SHRT_MIN   (-__SHRT_MAX__ - 1)
#define SHRT_MAX   __SHRT_MAX__
#define USHRT_MAX  __USHRT_MAX__

#define INT_MIN    (-__INT_MAX__ - 1)
#define INT_MAX    __INT_MAX__
#define UINT_MAX   __UINT_MAX__   /* <- this now works */

#define LONG_MIN   (-__LONG_MAX__ - 1L)
#define LONG_MAX   __LONG_MAX__
#ifndef __ULONG_MAX__
  /* Some targets may also lack __ULONG_MAX__; derive it if needed. */
# define __ULONG_MAX__ (__LONG_MAX__ * 2UL + 1UL)
#endif
#define ULONG_MAX  __ULONG_MAX__

#define LLONG_MIN  (-__LONG_LONG_MAX__ - 1LL)
#define LLONG_MAX  __LONG_LONG_MAX__
#ifndef __ULLONG_MAX__
# define __ULLONG_MAX__ (__LONG_LONG_MAX__ * 2ULL + 1ULL)
#endif
#define ULLONG_MAX __ULLONG_MAX__

/* A few projects expect these from <limits.h> even if <stdint.h> isn't included. */
#ifndef UINT32_MAX
#  define UINT32_MAX __UINT32_MAX__
#endif
#ifndef UINT64_MAX
#  define UINT64_MAX __UINT64_MAX__
#endif

#endif /* WASM_SYSROOT_LIMITS_H */
