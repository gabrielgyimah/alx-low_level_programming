#include "main.h"
/**
 * print_alphabet_10x - prints lower case alphabets 10x
 *
 * _putchar: Always 0
 */
void print_alphabet_10x(void)
{
	char c, j;

	for (j = 0; j < 'z'; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
