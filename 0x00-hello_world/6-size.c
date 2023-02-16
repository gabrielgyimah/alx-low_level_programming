#include <stdio.h>
/**
 * main- Main function
 * Return: Returns 0 always when  successful
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
