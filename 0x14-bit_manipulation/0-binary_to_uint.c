#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @arr: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(char *arr)
{
	unsigned int i, count = 0, y, convert = 0, actual_value = 0, exponent = 0;
	unsigned int base = 2;

	for (i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}

	if (arr == NULL)
	{
		return (0);
	}
	for (y = count; y > 0; y--)
	{
		convert = arr[y - 1] - '0';
		if (convert != 1 && convert != 0)
		{
			return (0);
		}
		else
		{
			actual_value = actual_value + (convert * power(base, exponent));
			exponent++;
		}
	}
	return (actual_value);
}

/**
 * power - calculates the power of base to the exponent
 *
 * @base: the base value
 * @exponent: the exponential value
 *
 * Return: the power of the base to the exponent
 */

unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;

	while (exponent > 0)
	{
		if (exponent % 2 == 1)
		{
			result *= base;
		}

		base *= base;
		exponent /= 2;
	}
	return (result);
}
