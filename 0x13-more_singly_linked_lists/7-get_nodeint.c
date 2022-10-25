#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the node
 * @index: index of the list
 * Return: returns nth mode and if the
 * node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}

