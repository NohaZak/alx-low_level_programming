#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all possible
 * combinations of single-digit numbers
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
