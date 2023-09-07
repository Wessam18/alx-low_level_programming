#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - program checked memory
 *
 *@b: integer allocated
 *Return: null
*/
void *malloc_checked(unsigned int b)
{
int *x;

x = malloc(b);
if (x == 0)
{
exit(98);
}
return (x);
}
