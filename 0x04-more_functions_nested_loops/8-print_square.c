#include "main.h"
/**
*print_square - Prints squares followed by a newl
*
*@size: nummber of squares
*
*Return: always 0 (success)
*/
void print_square(int size)
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
		_putchar('#');
		}
		_putchar('\n');
	}
}
}
