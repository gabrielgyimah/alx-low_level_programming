#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: int parameter coming rom the struct variable
 *
 * Returns: The number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
