#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t low = 0, mid;
size_t i, high = size - 1;

	if (!array || !size || !value)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		fprintf(stdout, "Searching in array:");
		for (i = low; i <= high; i++)
		{
			fprintf(stdout, " %d", array[i]);
			if (i < high)
				fprintf(stdout, ",");
		}
		fprintf(stdout, "\n");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}
	return (-1);
}
