#include "main.h"
#include "0-putchar.c"
/*
 * print_alphabet - Entry point
 * Return: Returns 0 when the main function runs succesfully
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	return (0);
}
