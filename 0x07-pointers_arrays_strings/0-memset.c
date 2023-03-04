#include "main.h"

/**
 * _memset - Fills memory block with a constant value
 *
 * @s: Pointer
 * @b: Constant byte
 * @n: The blick to be filled
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
