#include "main.h"

/**
 * get_endianness - endianeess
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned long int b = 1;

	return (*(char *)&b);
}

