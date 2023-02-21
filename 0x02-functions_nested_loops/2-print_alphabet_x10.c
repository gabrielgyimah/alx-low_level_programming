#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabets 10x
 *
 * _putchar: Always 0
 */
void print_alphabet_x10(void)
{
	char c, j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
