#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: the value being passed
 * @index: the index at which we set the value
 *
 * Return: success/fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	mask = ~mask;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n & mask;
	return (1);
}
