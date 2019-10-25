/* See LICENSE file for copyright and license details. */
#include "util.h"

long utf8decodebyte(const char c, size_t *i);
size_t utf8validate(long *u, size_t i);
size_t utf8decode(const char *c, long *u, size_t clen);

#define UTF_INVALID 0xFFFD
#define UTF_SIZ 4
