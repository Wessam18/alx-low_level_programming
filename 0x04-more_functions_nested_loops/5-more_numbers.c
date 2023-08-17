#include "main.h"
/**
*more_numbers - Prints the numbers ten times followed by a newl
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
	int c;

	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		{
		_putchar(1 + '48');
		}
		_putchar(c + 48);
	}
	i++;
	_putchar('\n');
}
}
