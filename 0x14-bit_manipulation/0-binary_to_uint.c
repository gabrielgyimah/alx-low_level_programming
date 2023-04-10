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
	int i, y, count = 0, increment = 1;
	unsigned int binary, ans = 0;

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
		binary = b[i] - '0';
		if (binary != 1 && binary != 0)
		{
			return (0);
		}
		else
		{
			ans = ans + (binary * increment);
			increment = increment * 2;
		}
	}
	return (ans);
}
