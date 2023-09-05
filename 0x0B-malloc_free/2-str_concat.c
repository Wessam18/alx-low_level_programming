#include "main.h"
/**
 *_strlen - get length
 *@s: string
 *Return: length
*/
int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
;
return (len);
}

/**
 *str_concat - function concatinate strings
 *
 *@s1: string 1
 *@s2: string 2
 *Return: null
*/
char *str_concat(char *s1, char *s2)
{
int i, len2, len1;
char *m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
m = (char *) malloc((len1 + len2) *sizeof(char) + 1);
if (m == 0)
{
return (NULL);
}
for (i = 0; i <= (len1 + len2); i++)
{
if (i < len1)
m[i] = s1[i];
else
m[i] = s2[i - len1];
}
m[i] = '\0';
return (m);
}
