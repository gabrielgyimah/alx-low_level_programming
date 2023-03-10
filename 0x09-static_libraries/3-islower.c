#include "main.h"
/**
 * _islower-check  - prints lower case alphabets 10x
 * @c: This character checks if it is lowercase
 * Return: Always 0 when lowercase and 1 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
