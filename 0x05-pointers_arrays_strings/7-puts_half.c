#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
		;
	r++;
	for (r /= 2; str[r] != '\0'; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
