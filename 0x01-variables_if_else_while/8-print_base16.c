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
	char c;
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			c = i + '0';
		}
		else
		{
			c = 1 - 10 + 'a';
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
