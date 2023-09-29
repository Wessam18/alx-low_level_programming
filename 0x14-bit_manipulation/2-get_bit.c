#include "main.h"
/**
 * get_bit - function get the value of a bit
 *
 * @n: number
 * @index: is the index you want to set it is value
 * Return: the value of the bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long i;

	if (index >= sizeof(n) * 8)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
