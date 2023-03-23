#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: Constant char
 * @n: size of variadic arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list(my_list);
	va_start(my_list, n);

	if (*separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		num = va_arg(my_list, int);
		printf("%d", num);

		if (i != n - 1)
			printf("%c ", *separator);
	}
	va_end(my_list);

	printf("\n");
}
