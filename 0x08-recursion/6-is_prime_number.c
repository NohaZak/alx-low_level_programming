#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check prime number
 *
 * @n: number
 * @notn: number
 *
 * Return: 1 for prime 0 for non prime
 */

int check_number(int n, int notn);

int is_prime_number(int n)
{
	return (check_number(n, 2));
}

/**
 * check_number - check all numbers < n
 *
 * @n: number
 * @notn: number
 * Return: 1 for prime 0 for non prime
 */

int check_number(int n, int notn)
{
	if (notn >= n && n > 1)
	{
		return (1);
	}
	else if (n % notn == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check_number(n, notn + 1));
}
