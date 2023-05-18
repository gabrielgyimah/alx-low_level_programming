#include "lists.h"

/**
 * free_dlistint - free all memory blocks
 *
 * @head: head of the list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head)
	{
		dlistint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
