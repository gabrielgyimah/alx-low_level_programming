#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first value for the swap
 * @b: The second value for the swap
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int tempVar = *a;
	*a = *b;
	*b = tempVar;
}
