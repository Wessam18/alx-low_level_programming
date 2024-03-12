#include <stddef.h>

/**
 * binary_search - Searches for a value in a sorted array of integers using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("Searching in array:");
        for (size_t i = low; i <= (size_t)high; i++)
        {
            printf(" %d", array[i]);
            if (i < (size_t)high)
                printf(",");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
