#include "main.h"
/**
 **_memset - function that fill a n bytes of memory
 *
 *@b: constant byte
 *@n: number of bytes used
 *@s: pointer
 *
 *Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
