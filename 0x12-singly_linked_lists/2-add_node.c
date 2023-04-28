#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL) {
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
