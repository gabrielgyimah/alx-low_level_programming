#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: String 1
 * @src: string 2
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
