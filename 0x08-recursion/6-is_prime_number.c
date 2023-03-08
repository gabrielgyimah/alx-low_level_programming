#include "main.h"

/**
 * is_prime_number - checks if the input number is a prime number of otherwise
 *
 * @n: int var
 *
 * Return: int value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 1));
}


/**
 * prime - checks if the input number is a prime number of otherwise
 *
 * @n: int var
 * @cv: int
 *
 * Return: int value
 */

int prime(int n, int cv)
{
	if (cv < n && cv != 1 && n % cv == 0)
		return (0);

	if (cv == n)
		return (1);

	return (prime(n, cv + 1));
}

