#include "binary-search.h"

int *binary_search(int value, const int *arr, size_t length)
{
    return bsearch(&value, arr, length, sizeof(int), compare_int);
}

int compare_int(const void *lhs, const void *rhs)
{
    return (*(int *)lhs - *(int *)rhs);
}
