#include "main.h"
/**
*print_times_table - Print 9 times table
*
*@n: integer
*Return: always 0 (success)
*/
void print_times_table(int n)
{
int m, i;
    if (n == 15 || n < 0)
    {
        return;
    }
	for (i = 0; i <= n; i++)
	{
		for (m = 0; m <= n; m++)
		{
			if (m == 0)
			_putchar('0');
			else if ((i * m) <= 9)
			{
			_putchar(',');
			_putchar(' ');
            _putchar(' ');
			_putchar(' ');
			_putchar((i * m) + '0');
			}
			else if ((i * m) >= 9 && (i * m) <= 99)
			{
			_putchar(',');
			_putchar(' ');
            _putchar(' ');
			_putchar(((n * m) / 100) + '0');
            _putchar(((n * m) / 10) + '0');
			_putchar(((n * m) % 10) + '0');
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
