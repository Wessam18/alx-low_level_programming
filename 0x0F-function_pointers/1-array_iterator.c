#include "function_pointers.h"
/**
 *array_iterator - function executes function given as parameter
 *
 *@array: the argument array
 *@size: the size of the array
 *@action: pointer to the function you need to use
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
}
