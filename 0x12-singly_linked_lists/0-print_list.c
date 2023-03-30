#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h - 
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	return (i +1);
}
