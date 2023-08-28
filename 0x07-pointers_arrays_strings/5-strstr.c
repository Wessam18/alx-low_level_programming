#include "main.h"
/**
 **_strstr - function locates a substring in a string.
 *
 *@haystack: string
 *@needle: substring
 *
 *Return: (s) if found char, (NULL) if not
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;

	while (haystack[i])
	{
		for (j = 0; needle[j] != '\0'; j++)
		{	
			if (haystack[i] == needle[j])
				return (needle + j);

		}
		i++;

	}
	return (NULL);
}
