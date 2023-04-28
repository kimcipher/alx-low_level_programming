#include <stdlib.h>
#include <stdio.h>
#include "../lists.h"

int main(void)
{
    listint_t *head = NULL; // initialize head pointer to NULL
    int n = 9; // set value to add to list
    head = add_nodeint(&head, n); // add new node with value n to beginning of list
    if (head == NULL) // check if add_nodeint() failed
    {
        printf("Error: add_nodeint() failed\n");
        return (1);
    }
    size_t num_nodes = print_listint(head); // print the list and get the number of nodes
    printf("-> %lu elements\n", num_nodes);
    free_listint(head); // free the memory allocated for the list
    return (0);
}
