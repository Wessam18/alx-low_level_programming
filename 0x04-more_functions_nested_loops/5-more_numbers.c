#include "main.h"
/**
*more_numbers - Prints the numbers ten times followed by a newl
*
*
*Return: always 0 (success)
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		if (num > 9)
		{
		_putchar(1 + 48);
		num = num % 10;
		}
		_putchar(num + 48);
	}
	i++;
	_putchar('\n');
}
}
