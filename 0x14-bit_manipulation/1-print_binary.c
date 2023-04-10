#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: arument being passed
 *
 * Return: int
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0, mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			printf("1");
			i = 1;
		}
		else if (i)
		{
			printf("0");
		}
		mask >>= 1;
	}
}
