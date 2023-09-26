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
listint_t *ptr;
unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL || *head == NULL || head == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	temp->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return (temp);
}
