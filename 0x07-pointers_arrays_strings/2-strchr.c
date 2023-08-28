#include "main.h"
/**
 **_strchr - function locates a character in a string.
 *
 *@s: string
 *@c: char
 *
 *Return: (s) if found char, (NULL) if not
 */
char *_strchr(char *s, char c)
{
int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
