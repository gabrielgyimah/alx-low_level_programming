#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer
 * @age: Pointer
 * @owner: Pointer
 * Return: Pointer to the new object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_n = strlen(name), int len_o = strlen(owner);
	char *new_name, *new_owner;

	dog_t *n_dog = malloc(sizeof(*n_dog));

	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	if (name == NULL)
		return (NULL);
	new_name = malloc(sizeof(*new_name) * len_n + 1);
	if (new_name == NULL)
	{
		free(n_dog);
		free(new_name);
		return (NULL);
	}

	if (owner == NULL)
		return (NULL);
	new_owner = malloc(sizeof(*new_owner) * len_o + 1);
	if (new_owner == NULL)
	{
		free(n_dog);
		free(new_owner);
		free(new_owner);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	n_dog->name = new_name;
	n_dog->owner = new_owner;
	n_dog->age = age;
	return (n_dog);
}
