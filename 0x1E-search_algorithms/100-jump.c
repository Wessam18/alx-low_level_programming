#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = sqrt(size);
    size_t left = 0;
    size_t right = 0, i;

    if (!array || size == 0)
        return (-1);

    while (right < size && array[right] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", right, array[right]);
        left = right; /* Move the left boundary of the block */
        right += jump; /* Move the right boundary by the jump step */
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    /* Linear search within the block */
    for (i = left; i <= right && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i); /* Found the value */
    }

    return (-1); /* Value not found */
}
