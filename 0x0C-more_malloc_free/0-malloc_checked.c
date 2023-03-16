#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptrMalloc;

	ptrMalloc = malloc(b);

	if (ptrMalloc == NULL)
	{
		exit (98);
	}

	return (ptrMalloc);

}
