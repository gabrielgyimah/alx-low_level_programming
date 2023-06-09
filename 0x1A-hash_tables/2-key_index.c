#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: Index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_from_djb2;

	if (size <= 0 || key == NULL || key[0] == '\0')
		exit(EXIT_FAILURE);

	key_from_djb2 = hash_djb2(key);

	return (key_from_djb2 % size);
}
