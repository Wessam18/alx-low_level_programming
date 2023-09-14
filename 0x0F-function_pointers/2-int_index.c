#include "function_pointers.h"
/**
 *int_index - function executes function given as parameter
 *
 *@array: the argument array
 *@size: the size of the array
 *@cmp: pointer to the function you need to use
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
long unsigned int x;
if (array != NULL && cmp != NULL)
{
for (x = 0; x < size; x++)
{
cmp(array[x]);
}
}
}
