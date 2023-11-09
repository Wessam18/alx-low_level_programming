#include "lists.h"
/**
 * sum_dlistint - function sum the linked list
 *
 * @head: head node
 * Return: as need
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
