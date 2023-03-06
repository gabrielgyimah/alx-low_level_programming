#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: Pointer to the main string
 * @needle: Pointer to the string string to be checked
 * Return: Number of pointer to beginnin
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int lenght_of_haystack = strlen(haystack);
	int lenght_of_needle = strlen(needle);
	char *ptrFirst_occurance;

	for (i = 0; i < lenght_of_haystack; i++)
	{
		bool found_match = false;

		for (j = 0; j < lenght_of_needle; j++)
		{
			if (needle[j] == haystack[i])
			{
				found_match = true;
				ptrFirst_occurance++;
			}
			else
				break;
		}
		if (found_match)
			ptrFirst_occurance = ptrFirst_occurance;
		else 
			ptrFirst_occurance = NULL;
	}
	return (ptrFirst_occurance);
}
