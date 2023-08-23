#include "main.h"
/**
 *rev_string - function that rev the string
 *
 *@s: input one
 *
 */
void rev_string(char *s)
{
int x = 0;
int length = strlen(s);
int middle = length / 2;
char temp;

	for (x = 0; x < middle; x++)
	{
		temp = s[x];
		s[x] = s[length - x - 1];
		s[length - x - 1] = temp;
	}

}
