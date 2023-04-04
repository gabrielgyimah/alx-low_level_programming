#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to the new node passed
 * @idx: the index at which we insert the node
 * @n: the value of the n element of the node
 *Return: Pointer to the node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_current, *newNode;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		newNode = NULL;
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	temp_current = *head;

	if (idx == 0)
	{
		newNode->next = temp_current;
		*head = newNode;
		return (*head);
	}

	while (--idx)
	{
		if (temp_current == NULL || temp_current->next == NULL)
			return (NULL);
		temp_current = temp_current->next;
	}
	newNode->next = temp_current->next;
	temp_current->next = newNode;
	return (newNode);
}
