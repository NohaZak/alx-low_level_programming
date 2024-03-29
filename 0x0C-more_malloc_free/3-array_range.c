#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int a, b;
	int *c;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	c = malloc(sizeof(int) * b);
	if (!c)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		c[a] = min;
		min++;
	}
	return (c);
}
