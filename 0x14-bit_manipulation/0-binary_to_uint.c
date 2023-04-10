#include "main.h"

unsigned int power(unsigned int base, unsigned int exponent);

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @arr: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(char *arr)
{
	unsigned int i, count = 0, y, convert = 0, actual_value = 0, exponent = 1;
	unsigned int base = 2;

	if (arr == NULL)
	{
		return (0);
	}

	for (i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}

	for (y = count - 1; y >= 0; y--)
	{
		convert = arr[y - 1] - '0';
		if (convert != 1 && convert != 0)
		{
			return (0);
		}
		else
		{
			actual_value = actual_value + (convert * exponent);
			exponent = exponent + exponent;
		}
	}
	return (actual_value);
}
