#include <stdio.h>
/*
 *main- Entry point
 *Return: Returns 0 when the main function runs succesfully
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
