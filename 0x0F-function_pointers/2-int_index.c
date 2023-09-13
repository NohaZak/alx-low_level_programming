#include "function_pointers.h"

/** int_index - a function that searches for an integer
 *
 * @array: array
 * @cmp: pointer
 * @size: size of array
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
