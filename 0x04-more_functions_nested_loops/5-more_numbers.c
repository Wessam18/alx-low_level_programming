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
	int num, count;
	for (count = 0; count <= 14; count++)
	{
		num = count;
		if (num > 9)
		{
			_putchar(1 + 48);
			num = (count % 10);
		}
		_putchar(count + 48);
	}
	i++;
	_putchar('\n');
}
}
