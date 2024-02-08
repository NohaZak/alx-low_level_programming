#include "main.h"

/**
 * set_bit - bit at indx
 * @n: nmbr
 * @index: bit
 *
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
