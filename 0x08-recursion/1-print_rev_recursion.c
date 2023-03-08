#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - outputs a string in reverse
 *
 * @s: char pointer
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursioni(s + 1);
		_putchar(*s);
	}
}
