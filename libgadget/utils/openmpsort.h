#ifndef OPENMPSORT_H
#define OPENMPSORT_H

#include <stddef.h>

void qsort_openmp(void *base, size_t nmemb, size_t size,
                         int(*compar)(const void *, const void *));

#endif
