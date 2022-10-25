#include "lists.h"

/**
 *free_listint2 - frees a list
 *@head: head of the list
 *Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *empty;
	listint_t *latest;

	if (head != NULL)
	{
		latest = *head;
		while ((empty = latest) != NULL)
		{
			latest = latest->next;
			free(empty);
		}
		*head = NULL;
	}
}

