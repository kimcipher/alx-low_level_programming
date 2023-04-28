#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		node_count++;
	}

	return (node_count);
}
