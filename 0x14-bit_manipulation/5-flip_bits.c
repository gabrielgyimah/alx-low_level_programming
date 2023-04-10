#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: parameter 1
 * @m: parameter 2
 *
 * Return: the inde
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int index = 0;

	while (difference)
	{
		index += difference & 1;
		difference >>= 1;
	}

	return (index);
}
