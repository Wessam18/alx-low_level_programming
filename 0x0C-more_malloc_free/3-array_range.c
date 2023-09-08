#include "main.h"
#include <stdlib.h>
/**
 *array_range - function print array
 *
 *@min: minimum numb
 *@max: maximum numb
 *
 *Return: null
*/
int *array_range(int min, int max)
{
int i, *m;
if (min > max)
return (NULL);
m = malloc((max - min + 1) * sizeof(int));
if (m == 0)
{
return (NULL);
}
for (i = 0; i <= max - min; i++)
{
m[i] = min + i;
}
return (m);
}
