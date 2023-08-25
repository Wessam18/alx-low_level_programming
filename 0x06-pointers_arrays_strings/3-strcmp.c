#include "main.h"
/**
 *_strcmp - function compare 2 string
 *
 *@s1: string one
 *@s2: string two
 *
 *Return: return 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

	while (s1[i] == s2[i])
	{
		s1[i]++;
		s2[i]++;
	}
	return (s1[i] - s2[i]);
}
