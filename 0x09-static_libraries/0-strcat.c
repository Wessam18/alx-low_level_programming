#include "main.h"
/**
 **_strcat - function that concatinate two strings
 *
 *@dest: string one
 *@src: string two
 *
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
int len = 0;
int i;
int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';

	return (dest);
}
