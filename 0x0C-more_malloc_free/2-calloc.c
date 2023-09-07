#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: int
 * @size: char
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}

