#include "lists.h"
/**
 *get_nodeint_at_index - fun frees the list
 *@head: start of the list
 * @index: num of nodes
 *Return: nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
        if (index == 0)
        {
            return (NULL);
        }
		head = head->next;
	}

	return (head);
}
