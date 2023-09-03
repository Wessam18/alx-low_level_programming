#include "main.h"
/**
 **_strncat - function that concatinate two strings
 *
 *@dest: string one
 *@src: string two
 *@n: length of string two
 *
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i;
int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}

	return (dest);
}
