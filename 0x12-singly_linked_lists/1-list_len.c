#include "lists.h"
/**
 *list_len - fun get length of list
 *
 *@h: head of list
 *Return: len
*/
size_t list_len(const list_t *h)
{
size_t i = 0;

if (h == NULL)
	{
		return (0);
	}
	while (h -> next != NULL)
	{
		h = h -> next;
		i++;
	}
	return (i);
}
