#include "lists.h"

/**
 * add_node_end - adds a new node at the of a list
 * @head: head of the linked list
 * @str: string to be stored
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *second;
	size_t list;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->str = strdup(str);

	for (list = 0; str[list]; list++)
		;
	first->len = list;
	first->next = NULL;
	second = *head;

	if (second == NULL)
	{
		*head = first;
	}
	else
	{
		while (second->next != NULL)
			second = second->next;
		second->next = first;
	}
	return (*head);
}

