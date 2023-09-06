#include "main.h"
/**
 *free_grid - function free memory
 *
 *@grid: pointer of memory
 *@height: array
 *Return: null
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
