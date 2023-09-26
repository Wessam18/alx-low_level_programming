#include "lists.h"
/**
 *add_nodeint_end - fun add node at end
 *
 *@head: start of list
 *@n: data
 *
 *Return: new address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
