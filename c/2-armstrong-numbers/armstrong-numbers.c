#include "armstrong-numbers.h"

bool is_armstrong_number(int candidate)
{
    int armstrong_sum = 0, copy_candidate = candidate, digits = 0;
    while(copy_candidate > 0)
    {
        copy_candidate /= 10;
        digits++;
    }
    copy_candidate = candidate;
    while(candidate > 0)
    {
        armstrong_sum += pow(candidate % 10, digits);
        candidate /= 10;
    }
    return copy_candidate == armstrong_sum;
}
