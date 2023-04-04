#include "lists.h"

/**
 * add_nodeint - A function that adds a new node a list
 *
 * @head: Points to a node in the list
 * @n: The int value of the n element of the struct variable
 *
 * Return: Returns a pointer to the new node added to the list
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

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (*head);
}
