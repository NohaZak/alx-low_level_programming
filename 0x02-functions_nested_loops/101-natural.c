#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: calculate the multiples of 3 and 5 below 1024
 *
 * Return: Always return 0
 */

int main(void)
{
	int total, number;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			total += number;
	}
	printf("%i\n", total);

	return (0);
}
