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

	while (i < size)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1); 
}
