#include "main.h"
/**
 * print_alphabet - prints _putchar
 *
 * _putchar: Always 0
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
