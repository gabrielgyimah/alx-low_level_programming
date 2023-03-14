#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: Source char
 *
 * Return: A pointer
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, length_of_str = strlen(str);

	s = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	else if (s == NULL)
		return (NULL);

	for (i = 0; i < length_of_str; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';

	return (s);
}
