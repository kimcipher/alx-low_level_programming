# 0x13. C - More singly linked lists

## Resource

- Read about [data structures](https://www.notion.so/C-Programming-f13cdb9661db464f8ea326c5a2654e8e) first.
- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s) 2008 UNSW Lecture.
- [Linked Lists](https://www.youtube.com/playlist?list=PLIsXzR_wZY-xQSwyG_PAQHJtyo4o9WWXd) Youtube Playlist I created.

---

- All the `*-main.c` files will be stored in the [main](./main) directory.

- Use this data structure.
	```c
/**
 * struct Node - a node in a singly linked list
 * @value: the value stored in the node
 * @next: a pointer to the next node in the list
 */
typedef struct Node {
    int value;
    struct Node *next;
} Node;

/**
 * print_list - prints the values of all nodes in the list
 * @head: a pointer to the first node in the list
 * @return: the number of nodes in the list
 */
size_t print_list(const Node *head);

/**
 * list_length - returns the number of nodes in the list
 * @head: a pointer to the first node in the list
 * @return: the number of nodes in the list
 */
size_t list_length(const Node *head);

/**
 * add_node - adds a new node with the given value to the beginning of the list
 * @head: a pointer to a pointer to the first node in the list
 * @value: the value to be stored in the new node
 * @return: a pointer to the new first node in the list
 */
Node *add_node(Node **head, const int value);

/**
 * add_node_end - adds a new node with the given value to the end of the list
 * @head: a pointer to a pointer to the first node in the list
 * @value: the value to be stored in the new node
 * @return: a pointer to the new last node in the list
 */
Node *add_node_end(Node **head, const int value);

/**
 * free_list - frees all the nodes in the list
 * @head: a pointer to the first node in the list
 */
void free_list(Node *head);

/**
 * free_list2 - frees all the nodes in the list and sets the head pointer to NULL
 * @head: a pointer to a pointer to the first node in the list
 */
void free_list2(Node **head);

/**
 * pop_node - removes the first node from the list and returns its value
 * @head: a pointer to a pointer to the first node in the list
 * @return: the value of the removed node
 */
int pop_node(Node **head);

/**
 * get_node_at_index - returns a pointer to the node at the given index in the list
 * @head: a pointer to the first node in the list
 * @index: the index of the node to be returned (starting from 0)
 * @return: a pointer to the node at the given index, or NULL if the index is out of range
 */
Node *get_node_at_index(Node *head, unsigned int index);

/**
 * sum_list - returns the sum of the values of all nodes in the list
 * @head: a pointer to the first node in the list
 * @return: the sum of the values of all nodes in the list
 */
int sum_list(Node *head);

/**
 * insert_node_at_index - inserts a new node with the given value at the given index in the list
 * @head: a pointer to a pointer to the first node in the list
 * @index: the index at which to insert the new node (starting from 0)
 * @value: the value to be
 */