#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: pointer for success, 98 for fail
 */

void *malloc_checked(unsigned int b)
{
	void *m;
	
	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
