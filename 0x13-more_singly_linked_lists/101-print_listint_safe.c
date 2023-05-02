#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list, handling loops
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current, *tmp;

    current = head;
    while (current != NULL)
    {
        count++;
        printf("[%p] %d\n", (void *) current, current->n);

        tmp = current->next;
        /* check for loop */
        if (tmp >= current)
        {
            printf("-> [%p] %d\n", (void *) tmp, tmp->n);
            exit(98);
        }

        current = tmp;
    }

    return count;
}