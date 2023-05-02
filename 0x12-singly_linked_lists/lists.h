#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
struct list_s {
  char *str;
  unsigned int len;
  struct list_s *next;
};

/**
 * print_list - prints the contents of a singly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const struct list_s *h);

/**
 * list_len - returns the length of a singly linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const struct list_s *h);

/**
 * add_node - adds a node to the beginning of a singly linked list
 *
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: pointer to the new node, or NULL on error
 */
struct list_s *add_node(struct list_s **head, const char *str);

/**
 * add_node_end - adds a node to the end of a singly linked list
 *
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: pointer to the new node, or NULL on error
 */
struct list_s *add_node_end(struct list_s **head, const char *str);

/**
 * free_list - frees the memory allocated for a singly linked list
 *
 * @head: pointer to the head of the list
 */
void free_list(struct list_s *head);

#endif /* LIST_H */