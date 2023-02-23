#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: The character to check
 *
 * Return: I for uppercase character and 0 for otherwise
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
