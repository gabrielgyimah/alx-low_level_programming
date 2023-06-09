#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int counter = 0;
	hash_table_t *map;

	if (size <= 0)
		return (NULL);

	map = malloc(sizeof(map));
	if (!map)
	{
		free(map);
		map = NULL;
		return (NULL);
	}

	map->size = size;
	map->array = malloc(sizeof(map->array) * map->size);
	if (!(map->array))
	{
		free(map->array);
		map->array = NULL;
		return (NULL);
	}

	while (counter < size)
	{
		map->array[counter++] = NULL;
	}

	return (map);
}
