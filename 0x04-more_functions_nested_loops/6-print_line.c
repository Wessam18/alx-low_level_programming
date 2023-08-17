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
int count;

if (n <= 0)
	_putchar('\n');

else
{
	for (count = 1; count <= n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}
