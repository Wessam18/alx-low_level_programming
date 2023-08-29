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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		return (haystack + i + j);
	}
	return (NULL);
}
