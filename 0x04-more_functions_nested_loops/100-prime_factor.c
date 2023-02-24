#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: Returns 0
 */


int main(void)
{
	long c = 612852475143, y;

	while (y < (c / 2))
	{
		if ((c % 2) == 0)
		{
			c /= 2;
			continue;
		}

		for (y = 3; y < (c / 2); y += 2)
		{
			if ((c % y) == 0)
				c /= y;
		}
	}

	printf("%ld\n", c);

	return (0);
}
