#include "main.h"
/**
 **_memcpy - function that copies the string pointed to by src
 *
 *@dest: destination memory area
 *@src: source memory area
 *@n: bytes copied
 *
 *Return: (dest)
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
