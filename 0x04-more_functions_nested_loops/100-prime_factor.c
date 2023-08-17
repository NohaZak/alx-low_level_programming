#include <stdio.h>

/**
 * main - main function
 *
 * Return: prime factor
 */

int main(void)
{
	unsigned int num = 2;
	unsigned long  largestPrime = 612852475143;

	while (num != largestPrime)
	{
		if (largestPrime % num == 0)
		{
			largestPrime = largestPrime / num;
		}
		else
		{
			num++;
		}
	}

	printf("%lu\n", largestPrime);

	return (0);
}
