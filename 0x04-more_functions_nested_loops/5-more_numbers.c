#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: Void
 */


void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('0' + c / 10);

			_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}
