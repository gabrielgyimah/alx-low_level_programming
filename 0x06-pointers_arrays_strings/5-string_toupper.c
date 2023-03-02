#include "main.h"
/**
 * string_toupper - changes all the lowercase letters of the string
 * to uppercase letters
 * @s: The input string
 *
 * Return: the pointer to destination
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
