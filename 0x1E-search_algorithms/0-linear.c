#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: The value we are looking for
 * Return: The first index where value if located
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || !value)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		i++;
	}
	return (-1);
}
