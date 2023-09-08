#include "main.h"
#include <stdlib.h>
/**
 *_realloc - function reallocate
 *
 *@ptr: old size
 *@old_size: old size
 *@new_size: re allocate size
 *
 *Return: null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int i;
char *m;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 || ptr != NULL)
free(ptr);
return (NULL);

m = malloc(new_size);

i = ((old_size < new_size) ? old_size : new_size);
memcpy(m, ptr, i);

free(ptr);
return (m);
}
