#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
