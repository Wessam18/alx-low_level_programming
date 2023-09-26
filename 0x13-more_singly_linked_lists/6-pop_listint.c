#include "lists.h"
/**
 *pop_listint - fun frees the list
 *@head: start of the list
*/
int pop_listint(listint_t **head);
{
listint_t *temp;

    if (*head == NULL)
    {
        return (0);
    }

	while (head != NULL)
	{
		temp = (*head)->next;
        data = (*head)->n;
		free(*head);

	}
    return (data);
}
