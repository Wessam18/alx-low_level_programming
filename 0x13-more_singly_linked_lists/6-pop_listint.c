#include "lists.h"
/**
 *pop_listint - fun frees the list
 *@head: start of the list
 *Return: data
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
