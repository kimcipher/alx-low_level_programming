#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 *              of a list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return 0;
	else
		return head->n + sum_listint(head->next);
}
