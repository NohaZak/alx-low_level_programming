#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int l, w, h;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (l = 1; l <= size; l++)
		{
			for (w = size - l; w > 0; w--)
			{
				_putchar(' ');
			}
			for (h = 0; h < l; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
