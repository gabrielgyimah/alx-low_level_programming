#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: main string char pointer
 * @c: substring char
 * Return: char pointer
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

