#include "main.h"
/**
 *puts_half -  function that prints a string, followed by a new line
 *
 *@str: reper to string
 *
 */
void puts_half(char *str)
{
int x;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (x >= 5)

		_putchar(str[x]);

	}
	_putchar('\n');
}
