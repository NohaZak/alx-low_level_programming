#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: length
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		dest[g] = src[g];
	}
	return (dest);
}
