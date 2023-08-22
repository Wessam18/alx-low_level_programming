#include "main.h"
/**
 *puts_half -  function that prints a string, followed by a new line
 *
 *@str: refer to string
 *
 */
void puts_half(char *str)
{
int x;
	for (x = 0; str[x] != '\0'; x++)
	{
		for (x /= 2; str[x] != '\0'; x++)

		_putchar(str[x]);

	}
	_putchar('\n');
}
