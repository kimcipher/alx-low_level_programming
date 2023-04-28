#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}

