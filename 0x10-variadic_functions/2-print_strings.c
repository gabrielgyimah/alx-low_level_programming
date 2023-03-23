#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: Seperates the strings
 * @n: number of variadic arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;

	va_list my_strings;

	va_start(my_strings, n);
	if (*separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		word = va_arg(my_strings, char *);

		if (!word)
			printf("(nil)");
		else
			printf("%s", word);

		if (i != n - 1)
			printf("%c ", *separator);
	}

	va_end(my_strings);
	printf("\n");
}
