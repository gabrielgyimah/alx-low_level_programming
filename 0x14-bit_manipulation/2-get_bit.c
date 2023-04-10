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
	int bin;

	if (index > ((sizeof(unsigned int) * 8) - 1))
	{
		bin = -1;
	}

	bin = (n >> index) & 1;

	return (bin);
}
