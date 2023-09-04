#include "main.h"

/**
 * _strlength - find length of string
 *
 * @s: string
 *
 * Return: int
 */

int _strlength(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *r;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlength(s1);
	size2 = _strlength(s2);
	r = malloc((size1 + size2) * sizeof(char) + 1);
	if (r == 0)
	{
		return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			r[i] = s1[i];
		}
		else
			r[i] = s2[i - size1];
	}
	r[i] = '\0';
	return (r);
}

