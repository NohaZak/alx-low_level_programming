#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible
 * different combinations of three digits
 *
 * Return: Always resturn 0 for success
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (c > b && b > a)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
