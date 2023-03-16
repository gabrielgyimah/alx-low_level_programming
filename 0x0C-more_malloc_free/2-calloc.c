#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * and set each btye with 0
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int result = nmemb * size;
	unsigned int i;
	char *ptrCalloc = NULL;

	if (result == 0)
		return (NULL);

	ptrCalloc = malloc(result);

	if (ptrCalloc == NULL)
		return (NULL);

	for (i = 0; i < result; i++)
	{
		ptrCalloc[i] = 0;
	}

	return (ptrCalloc);
}
