#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: The value to check
 *
 * Return: 1 if c is a digit and 0 for otherwise
 */

int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
			return (1);
	}

	return (0);
}

