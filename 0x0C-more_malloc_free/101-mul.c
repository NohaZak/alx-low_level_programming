#include "main.h"

/**
 * _puts - prints string
 *
 * @str: pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert string to integer
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, fstnum, i;

	for (fstnum = 0; !(s[fstnum] >= 48 && s[fstnum] <= 57); fstnum++)
	{
		if (s[fstnum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = fstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prinnts integer
 *
 * @n: int
 *
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, resp;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}

/**
 * main - print result
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
