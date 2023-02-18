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
	int j;

	for (i = 0; i < 8; i++)
	{
		for (c = i + 1; c < 9; c++)
		{
			for (j = c + 1; j < 10; j++)
			{
				putchar('0' + i % 10);
				putchar('0' + c % 10);
				putchar('0' + j % 10);
				if (i == 7 && c == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
