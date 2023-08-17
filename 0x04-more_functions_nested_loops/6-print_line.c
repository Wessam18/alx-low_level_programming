#include "main.h"
/**
*print_line - Prints _ n times followed by a newl
*
*@n: nummber times of print
*
*Return: always 0 (success)
*/
void print_line(int n)
{
int i;

while (i <= n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('_');
	i++;
	_putchar('\n');
}
}
