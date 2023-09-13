#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: Array we are searching through
 * @size: size of the array
 * @value: Value for which index we are looking for
 * Return: Index at value if success, -1 on failure
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || !value || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
			high = pos - 1;

	}

	return (-1);
}
