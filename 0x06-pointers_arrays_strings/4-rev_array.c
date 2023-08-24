#include "main.h"
/**
 *reverse_array - function that rev the array
 *
 *@a: input one
 *@n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
int x = 0;
int middle = n / 2;
int temp;

	for (x = 0; x < middle; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}

}
