#include "main.h"

/**
 * _memcpy - Copies memory block to another block
 *
 * @dest: destination block
 * @src: source block
 * @n: The block size
 * Return: Pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
