#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - Copies memory block to another block
 *
 * @s: Pointer to the source string
 * @accept: Pointer to the string string to be checked
 * Return: Number of bytes of accept found in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int lenght_of_s = strlen(s);
	int lenght_of_accept = strlen(accept);
	int actual_byte = 0;

	for (i = 0; i < lenght_of_s; i++)
	{
		bool found_match = false;

		for (j = 0; j < lenght_of_accept; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (found_match)
		{
			actual_byte++;
		}
		else
			break;
	}

	return (actual_byte);
}
