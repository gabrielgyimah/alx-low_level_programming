#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 *
 * @argc: Command line argument count
 * @argv: Command line argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);

	printf("%d\n", (n * m));
	return (0);
}
