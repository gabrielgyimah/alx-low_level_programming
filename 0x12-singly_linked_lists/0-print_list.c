#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: struct variable
 *
 * Return: Returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		count++;
	h = h->next;
	}

	return (count);
}
