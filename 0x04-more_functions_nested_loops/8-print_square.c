#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: integer to set size
 */

void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
