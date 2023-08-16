#include "main.h"
/**
*print_sign - A function print + if number is positive,
*print - if number negative, print 0 if number 0
*
*@n: a number to be check
*
*Return: 1 if positve number, -1 if negative number,
*0 if number 0.
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	return (0);
	}
	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	return (-1);
	}
}
