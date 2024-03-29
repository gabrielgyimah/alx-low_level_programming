#include "lists.h"
#include <stdlib.h>


/**
 * insert_dnodeint_at_index - insert node at postion
 *
 * @h: head of list
 * @idx:postion
 * @n: data
 *
 * Return: head of the modified lis
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (!temp || !temp->next)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
