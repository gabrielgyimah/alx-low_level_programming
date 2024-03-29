#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to the head node of the list
 * @n: the n value we're assining to the new node
 *
 * Return: the new node and null if unsuccessul
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
