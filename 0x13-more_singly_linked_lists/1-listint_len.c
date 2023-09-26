#include "lists.h"
/**
 *listint_len - fun print a list
 *
 *@h: head pointer
 *Return: len
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
	i++;
	h = h->next;
}
return (i);
}
