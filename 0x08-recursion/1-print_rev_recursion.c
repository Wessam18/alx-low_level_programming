#include "main.h"
/**
 *_print_rev_recursion - function that prints a string in reverse.
 *
 *@s: string
 */
void _print_rev_recursion(char *s)
{
int i = 0;
int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	for (i = x; s[i] >= 0; i--)
		_putchar(s[i]);
}
