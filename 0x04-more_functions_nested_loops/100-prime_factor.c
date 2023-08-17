#include <stdio.h>

/**
 * main - main function
 *
 * Return: prime factor
 */

int main(void)
{
	long long int num = 612852475143;
	long long int largestPrime = 2;

	while (num > 1)
	{
		if (num % largestPrime == 0)
		{
			num /= largestPrime;
		}
		else
		{
			largestPrime++;
		}
	}

	printf("%lld\n", largestPrime);

	return (0);
}
