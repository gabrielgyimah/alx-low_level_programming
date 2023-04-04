#include "lists.h"

/**
 * add_nodeint - adds a node at beginning of a linkedlist
 *
 * @head: The current head being passed
 * @n: value of the n element of thr struct variable
 *
 * Return: Pointer to the new struct variable
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (head == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
