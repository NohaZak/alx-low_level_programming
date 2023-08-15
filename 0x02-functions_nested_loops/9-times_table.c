#include "main.h"

/**
 * times_table - main function prints time table
 *
 */

void times_table(void)
{
	int m, n, result;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (n == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar('.');
				_putchar(',');
			}
			else
			{
				result = m * n;
				if (result < 10)
				{
					_putchar('.');
					_putchar('.');
				}
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (n < 9)
			{
				_putchar(',');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
