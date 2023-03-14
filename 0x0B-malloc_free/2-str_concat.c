#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: char pointer destination
 * @s2: char pointer source
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, t_len, i = 0, j = 0;
	char *ptrConcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	t_len = len1 + len2;
	ptrConcat = malloc(sizeof(char) * t_len + 1);

	if (ptrConcat == NULL)
		return (NULL);

	while (i < len1)
	{
		ptrConcat[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		ptrConcat[i] = s2[j];

		j++;
		i++;
	}

	ptrConcat[i] = '\0';

	return (ptrConcat);

}
