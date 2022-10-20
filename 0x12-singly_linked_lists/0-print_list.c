#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: singly linked list
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
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

