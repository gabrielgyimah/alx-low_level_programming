#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Item we are searching for 
 * Return: Index of array where value is found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start, end;

	if (!array || !value)
		return (-1);

	start = 0;
	end = size - 1;
	
	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * print_array - Prints out the elements of an array
 * @start: The index at which we start printing
 * @end: The index at which we stop printing
 * Return: Void
 */

void print_array(int *array, int start, int end)
{
	int i = start;
	
	if (array)
	{
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
}
