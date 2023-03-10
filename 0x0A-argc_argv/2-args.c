#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two int command line arguments
 *
 * @argc: command line argument count
 * @argv: command line argument pointer
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	for (i = 1; i < argc; i++)
	{
		int currv = strtol(argv[i], NULL, 10);

		sum *= currv;
	}

	printf("%d\n", sum);

	return (0);

}
