#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98
 *
 * @n: input
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%i, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%i, ", count);
	printf("98\n");
}
