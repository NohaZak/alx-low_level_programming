#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints all possible
 * combinations of two two-digit numbers
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			putchar(' ');
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);

			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
