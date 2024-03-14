#include "search_algos.h"
/**
 * binary_recur - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @left: Number of elements in the array
 * @right: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_recur(int *array, size_t left, size_t right, int value)
{
size_t mid, i;

	if (left > right)
		return (-1);

	

	fprintf(stdout, "Searching in array:");
	for (i = left; i <= right; i++)
	{
		fprintf(stdout, " %d", array[i]);
		if (i < right)
			fprintf(stdout, ",");
	}
	fprintf(stdout, "\n");

	mid = left + (right - left) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] >= value)
		return (binary_recur(array, left, mid - 1, value));
	else
		return (binary_recur(array, mid + 1, right, value));

}


/**
 * advanced_binary - function that make binary search
 * @array: the array to search in
 * @size: the size of array
 * @value: the value of array
 * Return: the index of array
 */
int advanced_binary(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1;

	if (!array || !size || !value)
		return (-1);

	return (binary_recur(array, low, high, value));
}
