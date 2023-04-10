#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, count = 0, y, convert = 0, actual_value = 0, exponent = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		count++;
	}

	for (y = count - 1; y >= 0; y--)
	{
		convert = b[y] - '0';
		if (convert != 1 && convert != 0)
		{
			return (0);
		}
		else
		{
			actual_value = actual_value + (convert * exponent);
			exponent = exponent * 2;
		}
	}
	return (actual_value);
}
