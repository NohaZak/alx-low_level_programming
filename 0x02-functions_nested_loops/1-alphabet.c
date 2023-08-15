#include "main.h"

/**
 * print_alphabet - print alphabet to standard output
 *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
