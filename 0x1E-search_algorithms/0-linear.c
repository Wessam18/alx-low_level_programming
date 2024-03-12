#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

	if (!array || !size || !value)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		fprintf(stdout, "Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
