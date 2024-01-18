#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: NULL
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
