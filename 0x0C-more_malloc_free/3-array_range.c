#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: int
 * @max: int
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int len, i = 0, *range = NULL;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	range = malloc(sizeof(*range) * len);

	if (range == NULL)
		return (NULL);

	while (min <= max)
	{
		range[i] = min;
		min++;
		i++;
	}

	return (range);
}
