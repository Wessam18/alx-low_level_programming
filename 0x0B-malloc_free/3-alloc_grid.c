#include "main.h"
/**
 *alloc_grid - function get 2-dimentional array
 *
 *@height: height of array
 *@width: width of array
 *Return: null
 *
*/
int **alloc_grid(int width, int height)
{
int **m, i = 0, j = 0;

if (width <= 0 || height <= 0)
return (NULL);

m = (int **) malloc(height * sizeof(int *));
if (m == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
m[i] = (int *) malloc(width * sizeof(int));
if (m[i] == NULL)
for (--i; i >= 0; i--)
free(m[i]);
free(m);
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}
