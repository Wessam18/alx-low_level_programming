#include "main.h"
/**
 *print_rev -  function that prints a string in reverse, followed by a new line
 *
 *@s: refer to string
 *
 */
void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}

	while (s--)
	{
		_putchar(*s + 0);
	}

	_putchar('\n');
}
