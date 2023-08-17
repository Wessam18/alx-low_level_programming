#include "main.h"
/**
*more_numbers - Prints the numbers ten times followed by a newl
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
	int c = 0;

	for (c = 0; c <= 14; c++)
		_putchar(c);
	i++;

	_putchar('\n');
}
}
