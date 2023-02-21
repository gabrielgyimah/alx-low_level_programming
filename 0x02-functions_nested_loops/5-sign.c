#include "main.h"
/**
 * print_sign- checks prints lower case alphabets 10x
 * @n: This is the value being checked
 * Return: 1 if n > 0, 0 if n = 0 and less than 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}
	else
	{
		_putchar('0');
		return (0);
	}
}
