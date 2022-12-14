#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stddef.h>
#include <stdlib.h>

int *binary_search(int value, const int *arr, size_t length);
int compare_int(const void *lhs, const void *rhs);

#endif
