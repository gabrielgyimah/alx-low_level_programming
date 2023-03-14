#include "main.h"
#include <stdlib.h>

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
	unsigned int i;

	ptrArray = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
	{
		ptrArray[i] = str[i];
	}

	return (ptrArray);
}
