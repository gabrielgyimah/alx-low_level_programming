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
	int i;

	for (i = 0; i <= 9; i++)
	{
		int numbers = i + '0';

		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
