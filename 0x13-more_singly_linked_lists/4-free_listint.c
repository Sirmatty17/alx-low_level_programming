#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of the list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *empty

		while ((empty = head) != NULL)
		{
			head = head->next;
			free(empty);
		}
}

