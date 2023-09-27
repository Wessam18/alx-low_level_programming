#include "lists.h"
/**
 *delete_nodeint_at_index - fun delete node at index of linked list.
 * @index: the index of the list
 * @head: the head of the list.
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *d;
	unsigned int i = 0;

	if (!*head || !head)
	{
		return (-1);
	}

	if (!index)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	d = *head;
	ptr = d;
	for (i = 0; i <= index && d; i++)
	{
		if (i == (index))
		{
			ptr->next = d->next;
			free(d);
			return (1);
		}
		else
		{
			ptr = d;
			d = d->next;
		}
	}
	return (-1);
}
