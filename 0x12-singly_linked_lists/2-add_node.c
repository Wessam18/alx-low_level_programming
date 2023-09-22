#include "lists.h"

/**
 * add_node - a function that adds a new node
 * @head: head of linked list
 * @str: string of linked list
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->next = *head;
	node->len = strlen(str);
	node->str = strdup(str);
	*head = node;
	return (node);
}
