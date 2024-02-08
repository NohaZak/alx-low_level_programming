#include "main.h"

/**
 * flip_bits - bits needed to flip nbrs
 *
 * @n: nmbr1
 * @m: nmbr2
 *
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int reverse = n ^ m;
	unsigned int total = 0;

	while (reverse)
	{
		if (reverse & 1ul)
			total++;
		reverse = reverse >> 1;
	}
	return (total);
}

