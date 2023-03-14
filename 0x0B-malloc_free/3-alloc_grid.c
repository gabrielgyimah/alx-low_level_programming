#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns apointer to a 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: int pointer to pointer
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0, **ptrGrid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptrGrid = (int **)malloc(sizeof(int *) * height);

	if (ptrGrid == NULL)
		return (NULL);

	while (k < height)
	{
		ptrGrid[k] = (int *)malloc(sizeof(int) * width);
		if (ptrGrid[k] == NULL)
		{
			while (k >= 0)
			{
				free(ptrGrid[k]);
				k--;
			}

			free(ptrGrid);
			return (NULL);
		}

		k++;
	}

	while (i < height)
	{
		for (; j < width; j++)
		{
			ptrGrid[i][j] = 0;
		}

		i++;
	}

	return (ptrGrid);
}

