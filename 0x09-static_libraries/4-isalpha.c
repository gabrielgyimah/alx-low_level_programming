#include "main.h"
/**
 * _isalpha-check - prints lower case alphabets 10x
 * @c: This s an input character
 * Return: Returns 1 if lowercase or uppercase and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
