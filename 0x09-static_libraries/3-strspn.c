#include "main.h"

/**
 * _strspn - a function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int g, k;

	for (g = 0; s[g] != '\0'; g++)
	{
		for (k = 0; accept[k] != s[g]; k++)
		{
			if (accept[k] == '\0')
				return (g);
		}
	}
	return (g);
}
