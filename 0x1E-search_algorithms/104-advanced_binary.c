#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted
 * array of integers using the binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @left: The left bound of the subarray to search in
 * @right: The right bound of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    if (left > right)
        return (-1);

    mid = left + (right - left) / 2;

    printf("Searching in array:");
    for (i = left; i <= right; i++)
    {
        printf("%s", i == left ? "" : ", ");
        printf(" %d", array[i]);
    }
    printf("\n");

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return (mid); /* Found the first occurrence */
        else
            return advanced_binary_recursive(array, left, mid, value); /* Search left for the first occurrence */
    }
    else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, right, value);
    else
        return advanced_binary_recursive(array, left, mid - 1, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the binary search algorithm and returns the index of the first occurrence.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return (-1);

    return (advanced_binary_recursive(array, 0, size - 1, value));
}
