#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 *
 *@s: string
 *
 */
void _puts_recursion(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}
