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
			result = m * n;

			if (n == 0)
			{
				_putchar('0');
			}
			else if	(result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
