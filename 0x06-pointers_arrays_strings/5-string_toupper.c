#include "main.h"
/**
 **string_toupper - function reverse the letters
 *@s: string name
 *Return: (s)
 *
 */
char *string_toupper(char *s)
{
int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] -= 32;
	}
	return (s);
}
