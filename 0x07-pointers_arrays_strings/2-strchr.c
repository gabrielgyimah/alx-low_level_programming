#include "main.h"
#include <string.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: the string
 * @c: the character
 * Return: Pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	int index = -1;
	int lenght_of_string = strlen(s);
	char *ptrofC = &c;

	for (i = 0; i <= lenght_of_string; i++)
	{
		if (s[i] == c)
		{
			index = 1;
			break;
		}
		else
			break;
	}

	if (index == 1)
		return (ptrofC);
	else
		return (NULL);
}
