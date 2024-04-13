#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point of the program
 *
 * Return: Always returns EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    int target1 = 3, target2 = 42, target3 = 999;

    /* Perform linear search for target1 */
    printf("Searching for %d:\n", target1);
    int result1 = linear_search(array, size, target1);
    if (result1 != -1)
        printf("Found %d at index: %d\n\n", target1, result1);
    else
        printf("%d not found in the array.\n\n", target1);

    /* Perform linear search for target2 */
    printf("Searching for %d:\n", target2);
    int result2 = linear_search(array, size, target2);
    if (result2 != -1)
        printf("Found %d at index: %d\n\n", target2, result2);
    else
        printf("%d not found in the array.\n\n", target2);

    /* Perform linear search for target3 */
    printf("Searching for %d:\n", target3);
    int result3 = linear_search(array, size, target3);
    if (result3 != -1)
        printf("Found %d at index: %d\n\n", target3, result3);
    else
        printf("%d not found in the array.\n\n", target3);

    return EXIT_SUCCESS;
}

