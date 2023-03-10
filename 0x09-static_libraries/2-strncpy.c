#include "main.h"

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
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
