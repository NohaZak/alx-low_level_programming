#include "main.h"

/**
 * binary_to_uint - convrt binary string to int
 * @b: binary number string
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}

