#include "lists.h"
/**
 * print_dlistint - function count num of nodes
 * @h: head node
 * Return: as need
 *
*/
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
const dlistint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	
	return (count);
}
