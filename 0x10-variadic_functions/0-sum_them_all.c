#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums it's variadic arguments
 *
 * @n: number of variadic arguments
 * Return: Returns the sum of the operation done by the function
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list num_to_sum;

	va_start(num_to_sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 1; i <= n; i++)
	{
		result = result + va_arg(num_to_sum, int);
	}

	va_end(num_to_sum);
	return (result);
}
