#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 *
 * Return: 0 if success
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
        i++;
	}
	printf("%d\n", sum);
	return (0);
}
