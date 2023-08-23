#include "main.h"

/**
 * _strcat - function that swaps  strings
 *
 * @dest: destination input
 * @src: source input
 *
 * Return: pointer to string @dest
 */

char *_strcat(char *dest, char *src)
{
	int st, st2;

	st = 0;

	while (dest[st])
		st++;

	for (st2 = 0; src[st2]; st2++)
		dest[st] = src[st2];
		st++;

	return (dest);
}
