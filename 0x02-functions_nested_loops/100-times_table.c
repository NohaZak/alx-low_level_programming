#include "main.h"

/**
 * print_times_table - main function
 * @n: integer
 */

void print_times_table(int n)
{
	int m, o, product;

	if (n <= 15 && n >= 0)
	{
		for (m = 0; m <= n; ++m)
		{
			_putchar('0');
			for (o = 1; o <= n; ++o)
			{
				_putchar(',');
				_putchar(' ');

				product = m * o;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar (' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
				} else if (product <= 99 && product >= 10)
					_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
