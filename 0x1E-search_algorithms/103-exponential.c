#include "search_algos.h"
/**
 * exponential_search - Searches for a value in a sorted array of
 * @array: Array we are searched
 * @size: Number of elements in the array
 * @value: Value we are searching for
 * Return: Index of value in the Array on success and -1 on faliure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 1, mid, i;

	if (!array || size == 0)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right *= 2;
	}
	if (right >= size)
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
