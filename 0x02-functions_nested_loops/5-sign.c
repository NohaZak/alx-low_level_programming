#include "main.h"

/**
 * print_sign - main function prints the sign of the number
 * @n: paramater
 *
 * Return: return 0 when = 0, 1 when positive and -1 when negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar ('+');
	return (1);
}
