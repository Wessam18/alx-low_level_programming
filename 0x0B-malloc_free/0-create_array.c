#include "main.h"
/**
 *create_array - create array
 * 
 *@size: size of array
 *@c: char 
 *Return: null
 * 
*/
char *create_array(unsigned int size, char c)
{
char *x;
x = (char *) malloc(size *sizeof(char));
if (size == 0 || x == 0)
return (0);
while (size --)
x[size] = c;
return (x);
}