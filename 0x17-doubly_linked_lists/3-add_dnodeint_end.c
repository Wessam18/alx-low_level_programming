#include "lists.h"
/**
 * add_dnodeint_end - function add node at end of list
 * @head: head node
 * @n: data of node
 * Return: as need
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
