#include "main.h"
#include <string.h>


/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: char pointer
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (0);
	return (length_of_s(0, s));
}
/**
 * ch_palind - check if a number is a palindrome
 *
 * @curri: int
 * @s: char pointer
 *
 * Return: int
 */

int length_of_s(int n, char *s)
{
	int l = strlen(s)  - n;
	int i = n - 1;

	if (s[i] != s[l])
		return (0);
	if (l == 0 && s[i] == s[l])
		return (1);
	return (length_of_s(n + 1, s));
}
