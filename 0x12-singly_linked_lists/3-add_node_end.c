#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

	size_t str_len = 0;
	if (str != NULL)
		str_len = strlen(str);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL) {
		*head = new_node;
	} else {
		list_t *temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return new_node;
}

