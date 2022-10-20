#include "lists.h"

/**
 * add_node  - add a new node at the
 * beginning of a linked list
 * @head: head of linked list
 * @str: string to store the list
 * Return: Address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	size_t first;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	list->str = strdup(str);

	for (first = 0; str[first]; first++)
		;
	list->len = first;
	list->next = *head;
	*head = list;

	return (*head);
}

