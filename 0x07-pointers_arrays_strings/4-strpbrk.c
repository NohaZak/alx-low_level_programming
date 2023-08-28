#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: pointer
 * @accept: bytes
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int g, k;
	char *p;

	g = 0;
	while (s[g] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[g])
			{
				p = &s[g];
				return (p);
			}
			k++;
		}
		g++;
	}

	return (0);
}
