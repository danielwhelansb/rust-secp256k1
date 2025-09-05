#ifndef WASM_SYSROOT_STDDEF_H
#define WASM_SYSROOT_STDDEF_H

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__    size_t;
typedef __WCHAR_TYPE__   wchar_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef offsetof
#define offsetof(T, m) __builtin_offsetof(T, m)
#endif

#endif /* WASM_SYSROOT_STDDEF_H */
