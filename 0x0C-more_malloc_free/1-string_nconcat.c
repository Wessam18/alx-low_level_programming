#include "main.h"
#include <stdlib.h>
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
 *string_nconcat - function concatinate strings
 *
 *@s1: string 1
 *@s2: string 2
 *@n: length of s2 printed
 *Return: null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len1, len2, size;
char *m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n >= len2)
{
size = len1 + len2;
}
else
{
size = len1 + n;
}
m = malloc(size + 1);
if (m == 0)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
if (i < len1)
m[i] = s1[i];
else
m[i] = s2[i - len1];
}
m[i] = '\0';
return (m);
}
