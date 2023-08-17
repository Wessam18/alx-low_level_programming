#include "main.h"
/**
*main - program that print from 0 to 100
*
*Return: always 0 (success)
*
*/
int main(void)
{
int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}
	printf("/n");
	return (0);
}
