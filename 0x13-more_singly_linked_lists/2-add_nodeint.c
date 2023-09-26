#include "lists.h"
/**
 *add_nodeint - fun add node at end
 *
 *@head: start of list
 *@n: data
 *
 *Return: new address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	*head = temp;
	return (temp);
}
