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

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		{
			new->next = *h;
			if (*h != NULL)
				(*h)->prev = new;
			*h = new;
			return (new);
		}

	while (count < (idx - 1) && temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	 if (temp->next != NULL)
		temp->next->prev = new;
	temp2 = temp->next;

	temp->next = new;
	new->prev = temp;
	new->next = temp2;
	temp2->prev = new;

	return (new);
}
