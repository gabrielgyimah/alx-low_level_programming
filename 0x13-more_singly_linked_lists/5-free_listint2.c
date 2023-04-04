#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *
 * @head: Pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *main_temp = *head;

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
	
	while(main_temp != NULL)
	{
		listint_t *temp = *head;

		free(head);
		*head = temp;
	}
	*head = NULL;
}
