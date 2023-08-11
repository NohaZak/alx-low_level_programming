#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: print single digit numbers from 0 to 10 in a new line
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
