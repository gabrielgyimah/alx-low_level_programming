#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strspn - Copies memory block to another block
 *
 * @s: Pointer to the source string
 * @accept: Pointer to the string string to be checked
 * Return: Number of bytes of accept found in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, l = strlen(accept);

	while (*s)
	{
		for (i = 0; i < l; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (NULL);
}
