#include "main.h"
/**
 *_strdup - function duplicate string
 *
 *@str: string
 *Return: null
 *
*/
char *_strdup(char *str)
{
int x, i;
char *m;
if (str == NULL)
{
return (NULL);
}
for (x = 0; str[x] != '\0'; x++)
;
m = (char *) malloc(x * sizeof(char) + 1);
if (m == 0)
{
return (NULL);
}
else
{

for (i = 0; i < x; i++)
m[i] = str[i];
}
return (m);
}
