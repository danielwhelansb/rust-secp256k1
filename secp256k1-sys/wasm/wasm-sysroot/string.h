#ifndef WASM_SYSROOT_STRING_H
#define WASM_SYSROOT_STRING_H

/* Map to compiler builtins so we don't need libc */
#define memcpy  __builtin_memcpy
#define memmove __builtin_memmove
#define memset  __builtin_memset
#define memcmp  __builtin_memcmp

/* Provide prototypes so the compiler is happy (return types/params match builtins) */
void *memcpy(void *dest, const void *src, __SIZE_TYPE__ n);
void *memmove(void *dest, const void *src, __SIZE_TYPE__ n);
void *memset(void *s, int c, __SIZE_TYPE__ n);
int   memcmp(const void *s1, const void *s2, __SIZE_TYPE__ n);

#endif
