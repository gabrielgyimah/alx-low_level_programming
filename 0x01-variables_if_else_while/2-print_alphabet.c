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
	char alphabeth[] = "abcdefghijklmnopqrstuvwxyz";
	
	int i, size = sizeof(alphabeth) / sizeof(alphabeth[0]);
	
	for (i = 0; i < size - 1; i++)
		putchar(alphabeth[i]);
	putchar('\n');
	return (0);
}
