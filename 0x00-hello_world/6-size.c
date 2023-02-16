#include <stdio.h>
/**
 * main- Main function
 * Return: Returns 0 always when  successful
 */
int main(void)
{
	printf("The size of char is %c bytes\n", sizeof(char));
	printf("The size of short is %hd bytes\n", sizeof(short));
	printf("The size of int is %d bytes\n", sizeof(int));
	printf("The size of long is %ld bytes\n", sizeof(long));
	printf("The size of long long is %lld bytes\n", sizeof(long long));
	printf("The size of float is %f bytes\n", sizeof(float));
	printf("The size of double is %Lf bytes\n", sizeof(double));
	printf("The size of long double is %zu bytes\n", sizeof(long double));
	return (0);
}
