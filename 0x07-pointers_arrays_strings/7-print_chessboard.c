i#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: int pointer to pointer
 * Return: Void
 */


void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');

		i++;
	}

}
