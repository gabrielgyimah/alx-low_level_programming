#include <stdio.h>

/**
 * main - Main begins here
 *
 * Return: Returns 0 when the mai function is successful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i % 10);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
