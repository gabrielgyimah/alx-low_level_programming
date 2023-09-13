#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches an array using binary search algorithm.
 * @array: array to be searched
 * @size: size of array to be searched
 * @value: value to be searched for
 *
 * Return: index of value (Success), -1 failure.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end;
	size_t middle;

	start = 0;
	end = size - 1;

	if (!array || !value)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		middle = (end + start) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}

/**
 * print_array - prints a given array
 * @array: Array to be printed
 * @start: printing starting point
 * @stop: stopping point for printing
 *
 * Return: nothing
 */
void print_array(int *array, int start, int stop)
{
	int i;

	if (array)
	{
		for (i = start; i < stop; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
}
