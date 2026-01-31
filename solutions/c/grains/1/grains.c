#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index < 1 || index > 64)
        return 0;
    return (uint64_t)1 << (index - 1);
    // return (uint64_t)1 << (index - 1); : Uses bitwise left shift to calculate 2^(index-1)
    // The (uint64_t) cast ensures the result is a 64-bit unsigned integer
}

uint64_t total(void)
{
    uint64_t total = 0;
    for (int i = 1; i <= 64; i++)
    {
        total += square(i);
    }
    return total;
}