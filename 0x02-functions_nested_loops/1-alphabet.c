#include "main.h"
#included "_putchar.c"
/*
 * print_alphabet - Entry point
 * Return: Returns 0 when the main function runs succesfully
 */
int main(void)
{
	char c = print_alphabet('a');

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	return (0);
}
