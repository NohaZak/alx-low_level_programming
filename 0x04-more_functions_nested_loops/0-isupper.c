#include "main.h"

/**
 * _isupper - checks input charcter is uppercase or not
 *
 * @c: alphabet input
 *
 * Return: Always return 1 for uppercase character, or 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 89)
		return (1);
	else
		return (0);
}
