/* See LICENSE file for copyright and license details. */
#include <stdlib.h>

#define MAX(A, B)               ((A) > (B) ? (A) : (B))
#define MIN(A, B)               ((A) < (B) ? (A) : (B))
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B))
#define VERSION "1"

void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
