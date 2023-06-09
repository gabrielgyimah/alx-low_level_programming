#include "hash_tables.h"

/**
 * hash_table_delete - delete the table
 *
 * @ht: table
 *
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		hash_node_t *t_map = ht->array[i], *tmp;

		if (!t_map)
		{
			i += 1;
			continue;
		}

		while (t_map)
		{
			tmp = t_map->next;

			if (t_map->key)
				free(t_map->key);
			if (t_map->value)
				free(t_map->value);
			if (t_map)
				free(t_map);
			t_map = tmp;
		}

		i += 1;
	}

	free(ht->array);
	free(ht);
}
