#include "main.h"
/**
 **cap_string - function cabitalize the first letters
 *@s: string name
 *Return: (s)
 *
 */
char *cap_string(char *s)
{
int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == 0) || (s[i] == '"') || (s[i] == ' ') ||
			(s[i] == '.') || (s[i] == '\n') || (s[i] == '\t') ||
			(s[i] == ',') || (s[i] == ';') || (s[i] == '!') ||
			(s[i] == '?') || (s[i] == '(') || (s[i] == ')') ||
			(s[i] == '{') || (s[i] == '}'))
		{
			if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		}
	}
	return (s);
}
