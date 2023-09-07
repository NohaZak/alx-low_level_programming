#include "main.h"

#define ERR_MSG "Error"

/**
 * is_digit - check if non-digit
 *
 * @s: string
 *
 * Return: 0, 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns length
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - handle main errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply 2 digits
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, carry, d1, d2, *sum, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	sum = malloc(sizeof(int) * l);
		if (!sum)
			return (1);
	for (i = 0; i <= l1 + l2; i++)
		sum[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l] - '0';
		carry = 0;
		for (l2 = l2 - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			carry += sum[l1 + l2 + 1] + (d1 * d2);
			sum[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		sum[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (sum[i])
			a = 1;
		if (a)
			_putchar(sum[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(sum);
	return (0);
}
