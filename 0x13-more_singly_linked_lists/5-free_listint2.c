#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *
 * @head: Pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *main_temp;

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

	main_temp = *head;

	while (main_temp != NULL)
	{
		listint_t *temp = main_temp->next;

		free(main_temp);
		main_temp = temp;
	}

	*head = NULL;
}
