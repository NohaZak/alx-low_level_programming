#include "main.h"

/**
 * print_binary - print binry strng of numbr
 * @n: numbr
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int mem = sizeof(n) * 8, binary = 0;

	while (mem)
	{
		if (n & 1L << --mem)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
		{
			_putchar('0');
		}
	}
	if (!binary)
	{
		_putchar('0');
	}
}

