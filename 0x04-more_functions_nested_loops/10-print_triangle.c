#include "main.h"
/**
*print_triangle - Prints _ n times followed by a newl
*
*@size: nummber times of print
*
*Return: always 0 (success)
*/
void print_triangle(int size)
{
int n, m;

if (size <= 0)
	_putchar('\n');

else
{
	for (n = 1; n <= size; n++)
	{
		for (m = 1; m <= size; m++)
		{
			if ((n + m) <= size)
			_putchar(' ');
			else
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
