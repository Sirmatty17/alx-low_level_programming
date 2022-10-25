#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: head of the node
 * Return: returns 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int node_head;
	listint_t *h;
	listint_t *latest;

	if (head == NULL)
		return (0);
	latest = *head;
	node_head = latest->n;
	h = latest->next;
	free(latest);
	*head = h;
	return (node_head);
}

