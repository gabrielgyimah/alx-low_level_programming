#include "hash_tables.h"

/**
 * hash_table_print - print all value on the hash table
 *
 * @ht: table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int t_flag = 0;

	if (!ht)
		return;

	putchar('{');

	while (i < ht->size)
	{
		hash_node_t *t_map = ht->array[i];

		if (!t_map)
		{
			i += 1;
			continue;
		}

		while (t_map->next)
		{
			if (t_flag)
				printf(", ");
			printf("'%s': '%s'", t_map->key, t_map->value);
			t_map = t_map->next;
		}

		if (t_flag)
			printf(", ");

		printf("'%s': '%s'", t_map->key, t_map->value);

		if (!t_flag)
			t_flag = 1;

		i += 1;
	}

	printf("}\n");
}
