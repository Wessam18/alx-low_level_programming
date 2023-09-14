#include "function_pointers.h"
/**
 *int_index - function executes function given as parameter
 *
 *@array: the argument array
 *@size: the size of the array
 *@cmp: pointer to the function you need to use
 *
 *Return: (-1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (array != NULL && cmp != NULL)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
