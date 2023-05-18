#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 *
 * @head: head pointer of the list
 * @index: index of the node we're returning
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (idx == index)
			return (head);

		head = head->next;
		idx++;
	}

	return (NULL);
}
