#include "lists.h"
/**
 * add_dnodeint - function add node at beggining of list
 * @head: head node
 * @n: data of node
 * Return: as need
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
