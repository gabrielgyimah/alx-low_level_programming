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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
