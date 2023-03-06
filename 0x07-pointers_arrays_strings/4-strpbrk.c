#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: Pointer to the source string
 * @accept: Pointer to the string to be checked
 * Return: Null
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
