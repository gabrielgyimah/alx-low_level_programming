#include "hash_tables.h"

/**
 * hash_table_set - adds a new item to the table
 *
 * @ht: pointer to the head node of the table
 * @key: key of the item bein created
 * @value: value of the item being created
 *
 * Return: 1 on Success, 0 on Failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *t_map, *h;

	if (!ht || !key || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	h = ht->array[index];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			return (1);
		}
		h = h->next;
	}

	t_map = malloc(sizeof(*t_map));
	if (!t_map)
	{
		free(t_map);
		t_map = NULL;
		return (0);
	}
	t_map->key = strdup(key);
	t_map->value = strdup(value);
	t_map->next = ht->array[index];
	ht->array[index] = t_map;

	return (1);
}
