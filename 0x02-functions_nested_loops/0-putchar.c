#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
