#include "main.h"

int check_pal(char *s, int i, int l);
int _strlen_recur(char *s);

/**
 * is_palindrome - checks a string if palindrome
 * @s: string to revers
 *
 * Return: 1 if plandrome 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recur(s)));
}

/**
 * _strlen_recur - returns length of string
 * @s: sring to be calculated
 *
 * Return: length
 */

int _strlen_recur(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recur(s + 1));
}

/**
 * check_pal - recursive check of characters if palindrome
 * @s: string
 * @i: iterator
 * @l: length
 *
 * Return: 1 if true 0 if not
 */

int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (check_pal(s, i + 1, l - 1));
}
