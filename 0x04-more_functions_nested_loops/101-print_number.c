#include "main.h"
/**
 *print_number - print an integer
 *
 *@n: the integer to be  printed
 *
 */
void print_number(int n)
{
unsigned int num = n;

	/*first check if number negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the frist few digits*/
	if ((num / 10) > 0)
		print_number(n / 10);

	/*print the last digit*/
	_putchar((num % 10) + '0');
}
