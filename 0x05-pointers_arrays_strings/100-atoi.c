#include "main.h"

/**
 * _atoi - convert string to integer
 *
 * @s: string
 *
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	unsigned int number = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}
