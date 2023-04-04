#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 *
 * @head: Pointer to the head node
 *
 * Return: value of the n element
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	
	if (head == NULL)
		return (0)
	if (*head == NULL)
		return (0);

	n = (*head)->n = n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
