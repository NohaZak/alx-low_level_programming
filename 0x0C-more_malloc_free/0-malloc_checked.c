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
	int *memory = malloc(b);

	if (memory == 0)
		exit(98);

	return (memory);
}

