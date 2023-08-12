#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Description - print  print digit number of base 10
*
*Return: Always 0 (success)
*
*/

int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (n = 0 ; n < 10 ; n++)
		printf("%d", n);
		printf("\n")
	return (0);
}
