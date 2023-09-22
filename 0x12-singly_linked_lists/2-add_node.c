#include "lists.h"
/**
 * 
 * 
 * 
 * 
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *first_node;
first_node = malloc(sizeof(list_t));

    if (head == NULL)
    {
        return (NULL);
    }
    if (first_node == NULL)
    {
        return (head);
    }
    if (str != NULL)
    {
        first_node -> str = strdup(str);
        if (first_node -> str != NULL)
        {
            free(first_node);
            return(NULL);
        }
        
        
    }

}
