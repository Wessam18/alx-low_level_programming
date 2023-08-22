#include "main.h"
/**
 *print_rev -  function that prints a string in reverse, followed by a new line
 *
 *@s: reper to string
 *
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		while (x--)

		_putchar(s[x] + 0);
	}
	_putchar('\n');
}
