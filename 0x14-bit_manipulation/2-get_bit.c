#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: index at which at which we return the bit
 *
 * Return: bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
