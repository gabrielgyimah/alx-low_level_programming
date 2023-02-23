#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: The value to check
 *
 * Return: 1 if c is a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
