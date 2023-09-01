#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer
 * @b:constant
 * @n: max bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; n > 0; g++, n--)
	{
		s[g] = b;
	}

	return (s);
}
