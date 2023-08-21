#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;

	while (rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
