#include "search_algos.h"

void print_array(int *array, size_t low, size_t high);

/**
 * binary_search - Perform binary search on a sorted array.
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If the value is found, the value itself.
 *         If the value is not found or the array is NULL, -1 is returned.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, half = 0;

    /* Check if the array is NULL or empty */
    if (array == NULL || size == 0)
        return (-1);

    /* Initial print of the array */
    print_array(array, low, size);

    /* Binary search */
    while (low <= high)
    {
        half = (low + high) / 2;

        /* If value is greater, search the right half */
        if (array[half] < value)
        {
            low = half + 1;
            print_array(array, low, high + 1);
        }
        /* If value is smaller, search the left half */
        else if (array[half] > value)
        {
            high = half - 1;
            print_array(array, low, high + 1);
        }
        /* If value is found */
        else
            return (array[half]);
    }

    /* Value not found */
    return (-1);
}

/**
 * print_array - Print all elements in an array.
 * @array: Pointer to the first element of the array.
 * @low: Lower index of the subarray to print.
 * @high: Upper index of the subarray to print.
 */
void print_array(int *array, size_t low, size_t high)
{
    printf("Searching in array: ");
    for (size_t i = low; i < high; i++)
    {
        if (i == high - 1)
            printf("%d\n", array[i]);
        else
            printf("%d, ", array[i]);
    }
}

