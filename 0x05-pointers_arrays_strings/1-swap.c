#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *
 * @a: input one
 * @b: input two
 *
 *
 *
 */
void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

