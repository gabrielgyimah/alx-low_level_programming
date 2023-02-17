#include <stdio.h>

/**
 * main - Main begins here
 *
 * Return: Returns 0 when the mai function is successful
 */
int main(void)
{
	int i;
	int c;

	for (i = 0; i < 9; i++)
	{
		for (c = i + 1; c < 10; c++)
		{
			putchar('0' + i % 10);
			putchar('0' + c % 10);

			if (i == 8 && c == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
