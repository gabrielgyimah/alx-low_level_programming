#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: The firts node in the list
 * @n: The n value we're assigning to the  new node
 *
 * Retrun: the new node and NULL if unsuccesful
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (!new_node || !head)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	if (!*(head))
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
