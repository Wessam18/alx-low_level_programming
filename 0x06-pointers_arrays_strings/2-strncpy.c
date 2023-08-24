#include "main.h"
/**
 **_strncpy - function that copies the string pointed to by src
 *
 *@dest: destination variable
 *@src: source variable
 *@n: length of second string
 *
 *Return: (dest)
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
