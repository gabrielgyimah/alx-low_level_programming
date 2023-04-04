#include "lists.h"

/**
 * get_nodeint_at_index - Returns the n node in a list
 *
 * @head: head node being passed
 * @index: index at which we return the corresponding nodes pointer
 *
 * Return: Pointer to the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_current;

	if (head == NULL)
		return (NULL);

	temp_current = head;

	while (temp_current != NULL && i < index)
	{
		temp_current = temp_current->next;
		i++;
	}

	if (temp_current == NULL)
	{
		temp_current = NULL;
		return (NULL);
	}

	return (temp_current);
}
