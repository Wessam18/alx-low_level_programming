#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1
 *
 * @n: number
 * @index: the index of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(n)* 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
