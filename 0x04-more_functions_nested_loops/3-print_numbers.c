#include "main.h"

/**
 * print_numbers -  checks for a digit (0 through 9).
 *
 * Return: Returns result
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
