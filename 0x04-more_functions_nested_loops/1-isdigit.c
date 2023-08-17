#include "main.h"

/**
 * _isdigit - check digits from 0 to 9
 *
 * @c: digits from 0 to 9
 *
 * Return: return 1 for digits from 0 to9 and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
