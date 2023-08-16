#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: The input number
*
*Return: The last digit number
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = last_digit * -1;
	}
	return (last_digit);
}
