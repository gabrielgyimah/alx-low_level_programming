#include "hash_tables.h"

/**
 * hash_table_get - gets key and value of an item from table
 * @ht: hash table
 * @key: key of item
 * Return: key/value on Success or NULL on Failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *t_map;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	t_map = ht->array[index];

	if (!t_map)
		return (NULL);

	while (t_map)
	{
		if (strcmp(t_map->key, key) == 0)
			return (t_map->value);
		t_map = t_map->next;
	}

	return (NULL);
}
