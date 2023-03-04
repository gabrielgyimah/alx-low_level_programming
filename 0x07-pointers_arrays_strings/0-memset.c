#include "main.h"
/**
 * _memset: fills a block of  memory with a constant byte.
 * @s: Pointer
 * @b: Constant byte
 * @n: The blick to be filled
 * Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	_memset(s, b, sizeof(char) * n);

	return (s);
}
