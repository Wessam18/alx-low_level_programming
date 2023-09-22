#include "lists.h"
/**
 * print_list - fun print all elements of a list.
 * @h: head
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		len++;
	}
	return (len);
}
