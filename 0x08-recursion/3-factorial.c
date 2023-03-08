#include "main.h"
#include <string.h>

/**
 * factorial -  returns the factorial of n
 *
 * @n: an int variable
 *
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
