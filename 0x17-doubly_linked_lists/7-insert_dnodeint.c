#include "lists.h"
/**
 * insert_dnodeint_at_index - function add node at idx
 * @h: head node
 * @n: data of node
 * @idx: position of new node
 * Return: as need
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = NULL;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && count < (idx - 1))
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;

	if (temp->next != NULL)
	{
		new->next = temp->next;
		temp->next->prev = new;
	}
	else
	{
		new->next = NULL;
	}

	temp->next = new;

	return (new);
}
