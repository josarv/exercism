#include "isogram.h"

bool is_isogram(const char phrase[])
{
    if (!phrase)
        return false;
    for (size_t i = 0; i < strlen(phrase); ++i)
    {
        for (size_t j = i + 1; j < strlen(phrase); ++j)
        {
            if (tolower(phrase[i]) == tolower(phrase[j]) && phrase[i] != '-' && phrase[i] != ' ')
                return false;
        }
    }
    return true;
}
