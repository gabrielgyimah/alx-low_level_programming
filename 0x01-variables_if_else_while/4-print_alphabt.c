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
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
