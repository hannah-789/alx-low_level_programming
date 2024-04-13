#include "search_algos.h"

/**
 * linear_search - Search for an element in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the index of the value in the array.
 *         If the value is not found or the array is NULL, -1 is returned.
 */
int linear_search(int *array, size_t size, int value)
{
    /* Check if the array is NULL */
    if (array == NULL)
        return (-1);

    /* Linear search through the array */
    for (size_t i = 0; i < size; i++)
    {
        /* Print the value being checked */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* Check if the current element matches the value */
        if (array[i] == value)
            return (i);
    }

    /* Value not found */
    return (-1);
}

