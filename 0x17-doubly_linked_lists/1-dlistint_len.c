#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 *
 * @h: Pointer to the head node
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	else
	{
		while (h)
		{
			counter++;
			h = h->next;
		}
	}

	return (counter);
}
