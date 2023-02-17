#include <stdio.h>

/**
 * main - Main begins here
 *
 * Description: prints of alphabets in lowercase with putschar function
 *
 * Return: Returns 0 when the mai function is successful
 */
int main(void)
{
	int i = 0;
	int c = 'a';

	for (; i < 10; i++)
		putchar('0' + i % 10);
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
