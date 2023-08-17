#include "main.h"

/**
 * print_line - prints line based on given n
 *
 * @n: paramater
 *
 * Return: drawn line
 */

void print_line(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		_putchar('_');
		_putchar('\n');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
