#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with c
 *
 * @size: size of the arrat
 * @c: value of all elements
 *
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptrArray;

	ptrArray = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	else if (ptrArray == NULL)
		return (NULL);

	{
		for (i = 0; i < size; i++)
		{
			ptrArray[i] = c;
		}
	}
	return (ptrArray);
}
