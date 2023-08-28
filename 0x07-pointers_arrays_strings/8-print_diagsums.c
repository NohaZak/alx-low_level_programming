#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int g, d1 = 0, d2 = 0;

	for (g = 0; g < size; g++)
	{
		d1 += a[g];
		d2 += a[size - g - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
