#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *
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
