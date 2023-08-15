#include "main.h"

/**
 * times_table - main function prints time table
 */

void times_table(void)
{
	int m, n, product;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar('.');
			_putchar(' ');

			product = m * n;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
