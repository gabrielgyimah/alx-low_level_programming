#include "main.h"


/**
 * print_triangle - prints a triangle
 *
 * @size: size of int
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i, c,  y;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (y = size - i; y > 0; y--)
				_putchar(' ');
			for (c = 0; c < i; c++)
				_putchar('#');

			if (i == size)
				break;
			_putchar('\n');
		}
	}

	_putchar('\n');

}
