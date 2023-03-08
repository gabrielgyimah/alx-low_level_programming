#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int var
 *
 * Return: int value
 */


int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (sqr(n, 0));
}

/**
 * sqr - return the square root of a number
 *
 * @n: int 1
 * @cv: int 2
 *
 * Return: int value
 */

int sqr(int n, int cv)
{
	if (cv > n / 2)
		return (-1);

	if (cv * cv == n)
		return (cv);

	return (sqr(n, cv + 1));
}
