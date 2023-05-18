#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 *
 * @h: head node of the list
 *
 * Return: number of items in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}

	return (counter);
}
