#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of a list
 * @n: n element
 * Return: the address of the new element or
 * NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *empty;

	(void)empty;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	empty = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (empty->next != NULL)
		{
			empty = empty->next;
		}
		empty->next = new_node;
	}
	return (*head);
}

