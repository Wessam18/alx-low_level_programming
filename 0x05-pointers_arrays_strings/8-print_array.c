#include "main.h"
/**
 *print_array - function that prints n elements of an array of integers,
 *
 *@n: number of elements
 *@a: array name
 *
 */
void print_array(int *a, int n)
{
int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
			printf("%d", a[x]);
			printf(",");
			printf(" ");
		}
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
