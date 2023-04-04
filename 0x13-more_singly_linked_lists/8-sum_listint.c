#include "lists.h"

/**
 * sum_listint - Sum all the data (n) of a listint_t linked list
 *
 * @head: Current node
 *
 * Return: Total
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int total = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}
