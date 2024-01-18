#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: NULL
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(size_t b);

	if (p == NULL)
		return(NULL);

	return (p);
}
