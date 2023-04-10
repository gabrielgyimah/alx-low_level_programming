#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary
 *
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, y, count = 0, exponent = 1;
	unsigned int convert, ans = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (y = 0; b[y] != '\0'; y++)
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		convert = b[i] - '0';
		if (convert != 1 && convert != 0)
		{
			return (0);
		}
		else
		{
			ans = ans + (convert * exponent);
			 exponent *= 2;
		}
	}
	return (ans);
}
