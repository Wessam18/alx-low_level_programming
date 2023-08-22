#include "main.h"
/**
 *puts2 -  function that prints a string, followed by a new line
 *
 *@str: reper to string
 *
 */
void puts2(char *str)
{
int x;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		
		_putchar(str[x]);
		
	}
	_putchar('\n');
}
