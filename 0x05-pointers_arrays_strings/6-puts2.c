#include "main.h"
/**
 *puts2 -  function that prints a string, followed by a new line
 *
 *@str: reper to string
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
		_putchar(*str + 0);
		}
		str++;
	}
	_putchar('\n');
}
