#include "lists.h"

/**
 * add_nodeint -  adds a new node at the end of a listint_t list
 *
 * @head: a doouble pointer that points to the head of the list
 * @n: the int parameter of the current struct variable or list item
 *
 * Return: pointer to the current variable passed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		listint_t *temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);

		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newNode->next = NULL;
		temp->next = newNode;

	}

	return (newNode);
}
