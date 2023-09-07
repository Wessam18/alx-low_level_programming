#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - program checked memory
 *
 *@b: integer allocated
 *Return: null
 *
*/
void *malloc_checked(unsigned int b)
{
unsigned int *x;

x = malloc(b);
if (x == NULL)
{
exit(98);
}
return (x);
}
