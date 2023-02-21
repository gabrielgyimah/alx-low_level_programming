#include "main.h"

/**
 * _abs- This prints the absolute value of an integer
 * @a: This is the variable holding the  interger
 *
 * Return: Returns the absolute value
 */

int _abs(int a)
{
	int i = a;
	int y;

	if (i < 0)
	{
		i = i * (-1);
	}
	y = i;
	return (y);
}

