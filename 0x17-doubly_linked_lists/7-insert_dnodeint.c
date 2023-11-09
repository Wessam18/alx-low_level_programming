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
	dlistint_t *temp = *h, *temp2 = NULL, *new = NULL;
	unsigned int count = 0;

	if (temp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (count < idx && temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		count++;
	}

	if (count < idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp2;
	new->next = temp;

	if (temp != NULL)
		temp->prev = new;

	temp2->next = new;

	return (new);
}
