#include "main.h"

/**
 * print_daigonal - draws a diagonal line on the terminal
 *
 * @n: paramater
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int diagonal, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diagonal = 1; diagonal < n; diagonal++)
		{
			for (space = 1; space < diagonal; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
