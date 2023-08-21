#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first paramater
 * @b: second paramater
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
