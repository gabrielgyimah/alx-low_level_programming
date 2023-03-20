#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free struct onject dog
 * @d: Pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
