#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *
 *@s: refer to string
 *
 *Return: (string length)
 */
int _strlen(char *s)
{
int count;
	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

