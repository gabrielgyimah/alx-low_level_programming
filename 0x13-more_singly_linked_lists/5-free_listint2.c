#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *
 * @head: Pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1;

	if (head == NULL)
	{
		head = NULL;
		return;
	}

	if (*head == NULL)
	{
		*head = NULL;
		return;
	}

	tmp1 = *head;

	while (tmp1 != NULL)
	{
		listint_t *tmp = tmp1->next;

		free(tmp1);
		tmp1 = tmp;
	}

	*head = NULL;
}
