#include "main.h"
/**
 *print_rev -  function that prints a string in reverse, followed by a new line
 *
 *@s: refer to string
 *
 */
void print_rev(char *s)
{
int x, i;
	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	for (i = x; i >= 0; i--)
	{
		_putchar(s[x] + 0);
	}
	_putchar('\n');
}
