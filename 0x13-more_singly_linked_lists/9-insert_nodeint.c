#include "lists.h"
/**
 *insert_nodeint_at_index - fun add node at end
 *
 *@head: start of list
 *@n: data
 *@idx: index where new node added
 *
 *Return: new address
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp;
listint_t *ptr = *head;
unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL || *head == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		if (i == idx)
		{
			ptr->next = temp;
		}
		ptr = ptr->next;
		i++;
	}
	return (temp);
}
