#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - main function that prints the last digit
 * @n: paramater
 *
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
