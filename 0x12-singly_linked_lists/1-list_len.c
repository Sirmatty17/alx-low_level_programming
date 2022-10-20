#include "lists.h"

/**
 * list_len - prints all the elements of a list
 * @h: singly linked list
 * Return: returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t list;

	list = 0;

	while (h != NULL)
	{
		h = h->next;
		list++;
	}
	return (list);
}

