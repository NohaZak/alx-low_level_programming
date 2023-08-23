#include "main.h"

/**
 * _strncat -  a function that concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];

	dest[a + b] = '\0';

	return (dest);
}

