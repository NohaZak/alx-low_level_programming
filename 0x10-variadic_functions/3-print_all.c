#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * format_characters - character format
 * @separator: separator of string
 * @ap: pointer
 * Return: void
 */

void format_characters(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_integers - integers format
 *
 * @separator: separator of string
 * @ap: pointer
 *
 * @Return: void
 */

void format_integers(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format floats - float format
 * @separator: separator of string
 * @ap: pointer
 *
 * @Return: void
 */

void format_floats(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_strings - strings format
 *
 * @separator: separator of string
 * @ap: pointer
 *
 * @Return: void
 */

void format_strings(char *separator, va_list ap)
{
	char *string = va_arg(ap, char *);

	switch ((int)(!string))
		case 1:
			string = "(nil)";
	printf("%s%s", separator, string);
}

/**
 * print_all - a function that prints anything
 *
 * @format: formatted string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list ap;
	int a = 0, b;
	token_t tokens[] = {
		{"c", format_characters},
		{"i", format_integers},
		{"f", format_floats},
		{"s", format_strings},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[a])
	{
		b = 0;
		while (tokens[b].token)
		{
			if (format[a] == tokens[b].token[0])
			{
				tokens[b].f(separator, ap);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}
