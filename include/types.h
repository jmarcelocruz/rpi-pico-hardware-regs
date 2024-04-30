#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

typedef volatile uint32_t rw32_t;
typedef volatile uint32_t wo32_t; /* beware: write-only is not actually enforceable by the type system of the language */
typedef const volatile uint32_t ro32_t;

#endif
