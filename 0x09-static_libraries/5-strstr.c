#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * check - check if two string are similar
 * @s1: char pointer 1
 * @s2: char pointer 2
 *
 * Return: Non-void int value
 */

int check(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}

	return (*s2 == '\0');
}

/**
 * _strstr - locates a substring
 *
 * @haystack: char pointer to main string
 * @needle: char pointer to substring
 *
 * Return: char pointer
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if ((*haystack == *needle) && check(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (NULL);
}
