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

    unsigned int total = 0;

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        total = (total << 1) | (b[i] - '0');
    }

    return total;
}

