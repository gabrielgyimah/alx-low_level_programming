#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array
 * @array: Array we are searching
 * @size: Size of the array
 * @value: Value we are seacrhing for
 * Return: Index of value on success, -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t start = 0, end, i = 0;

	if (!array || !value)
		return (-1);
	
	end = jump;
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		start = end;
		end = end + jump;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}

	i = start;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (i <= end)
	{
		if (i > size - 1)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
