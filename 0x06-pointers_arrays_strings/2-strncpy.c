#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string.
 * @dest: String 1 (destination)
 * @src: string 2 (source)
 * @n: where the copy ends for src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
