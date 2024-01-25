#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line.
 *
 * @separator: string
 * @n: number
 * @...: variable number
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list ap;
	char *string;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
	{
		printf("%s%s", (string = va_arg(ap, char *)) ? string : "(nil)",
				a ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
