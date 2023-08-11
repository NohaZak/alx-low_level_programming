#include <stdio.h>

/**
 * main -Entry point of the program
 *
 * Description: print digit from 0 to 9 using putchar function
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
