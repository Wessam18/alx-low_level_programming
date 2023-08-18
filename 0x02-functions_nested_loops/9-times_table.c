#include "main.h"
/**
*times_table - Print 9 times table
*
*Return: always 0 (success)
*/
void times_table(void)
{
int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (m == 0)
			_putchar('0');
			else if ((n * m) <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((n * m) + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(((n * m) / 10) + '0');
			_putchar(((n * m) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
