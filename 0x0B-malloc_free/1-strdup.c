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
	char *ptrArray;
	unsigned int i, length_of_str = strlen(str);

	ptrArray = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);
	else if (ptrArray == NULL)
		return (NULL);

	for (i = 0; i < length_of_str; i++)
	{
		ptrArray[i] = str[i];
	}

	return (ptrArray);
}
