#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @left: int
 * @right: int
 * @size: Number of elements in the array
 * @value: Value we are returning it's index
 * Return: First index of Value on success, -1 on failure
 */

int binary_search_recursive(int *array, int value, int left, int right)
{
	int i = left, mid;
	if (left > right)
		return -1;
	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", i);
		if (i < right)
			printf(", ");
		i++;
	}
	printf("\n");
	mid = left + (right - left) / 2;

	if (array[mid] == value)
		return mid;

	if (array[mid] < value)
		return binary_search_recursive(array, value, mid + 1, right);

	return binary_search_recursive(array, value, left, mid - 1);
}


/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Array we are searching through
 * @size: Number of elements in the array
 * @value: Value we are returning it's index
 * Return: First index of Value on success, -1 on failure
 */

int advanced_binary(int *array, size_t size, int value)
{
	return binary_search_recursive(array, value, 0, size - 1);
}
