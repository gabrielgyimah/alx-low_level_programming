#include "main.h"

/**
 * _strlen - Returns the length of *s
 * @s: variable
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length_of_string = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length_of_string++;
	}
	return (length_of_string);
}
