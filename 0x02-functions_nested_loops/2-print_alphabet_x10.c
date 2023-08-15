#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always return 0 for succeess
 */

void print_alphabet_x10(void)
{
	char m;
	char n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);

		}
		_putchar('\n');
	}
}
