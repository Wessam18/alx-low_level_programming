#include "main.h"

/**
 * print_alphabet_x10 - Prints the lc alphabet ten times followed by a newl
 */
void print_alphabet_x10(void)
{
char ch;
int i = 0;
while (i < 10)
{
	for (ch = 'a'; ch < 'z'; ch++)
		_putchar(ch);
	i++;

	_putchar('\n');
}
}
