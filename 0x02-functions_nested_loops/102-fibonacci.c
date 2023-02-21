#include <stdio.h>

/**
 * _abs- This prints the fibonacci sequence
 *
 * Return: Returns 0 when successul
 */

int main(void)
{
	int n;
	long int y1, y2, c;

	y1 = 1;
	y2 = 2;
	printf("%ld, %ld", y2, y2);
	for (n = 0; n < 48; n++)
	{
		c = y1 + y2;
		printf(", %ld", c);
		y1 = y2;
		y2 = c;
	}
	printf("\n");
	return (0);
}
