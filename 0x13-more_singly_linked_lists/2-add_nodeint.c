#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a new list
 * @head: head of a list
 * @n: n element
 * Return: returns the address of the new elements
 * then NULL when it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

