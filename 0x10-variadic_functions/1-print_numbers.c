#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: number variables
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = v;
	va_list ap;

	if (!v)
	{
		printf("\n");
		return;
	}
	va_start(ap, v);
	while (a--)
	{
		printf("%d%s", va_arg(ap, int),
				a ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
