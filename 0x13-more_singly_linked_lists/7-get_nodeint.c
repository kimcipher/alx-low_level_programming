#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index nth from a linked list
 *
 * @head: pointer to the first node of the list
 * @index: no of node to access
 *
 * Return: node at nth index OR NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

/* iterate through nodes in list until the index-th node is found or end of list is reached */
for (i = 0; i < index && head != NULL; i++)
    head = head->next;

/* if index is greater than the number of nodes in the list, return NULL */
if (i < index)
    return (NULL);

/* otherwise, return the node at the given index */
    return (head);
}
