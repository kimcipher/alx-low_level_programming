#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *prev_node, *current_node;
    unsigned int i;

    /* Create the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;

    /* Handle the special case where the new node should be inserted at the beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* Find the previous and current nodes */
    prev_node = NULL;
    current_node = *head;
    for (i = 0; i < idx && current_node != NULL; i++)
    {
        prev_node = current_node;
        current_node = current_node->next;
    }

    /* If idx is greater than the number of nodes in the list, return NULL */
    if (i < idx)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert the new node between the previous and current nodes */
    prev_node->next = new_node;
    new_node->next = current_node;

    return (new_node);
}
