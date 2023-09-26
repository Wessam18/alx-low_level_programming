#include "lists.h"
/**
 *free_listint - fun frees the list
 *@head: start of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
    head = NULL;
}
