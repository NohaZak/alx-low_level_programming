#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: paramater
 *
 * Return: void
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
		for (length < 1; length < size; length++)
		{
			for (width = 1; width < length; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
