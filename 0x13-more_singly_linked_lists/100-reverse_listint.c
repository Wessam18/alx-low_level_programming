#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL, *prv = NULL;


	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = (*head);
		(*head) = nxt;
	}

	*head = prv;
	return (*head);
}
