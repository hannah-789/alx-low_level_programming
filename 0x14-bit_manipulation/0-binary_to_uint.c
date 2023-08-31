#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertible char
*/
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return 0;

    unsigned char power_of_2 = 1;
    unsigned int total = 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        total += power_of_2 * (b[i] - '0');
        power_of_2 *= 2;
    }

    return total;
}
