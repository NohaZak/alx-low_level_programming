#include <stdio.h>

/**
 * main - main entry
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always return 0
 */

int main(void)
{
	int a = 1, b = 2;

	printf("%d, %d", a, b);

	for (int i = 2; i < 98; i++)
	{
		int c = a + b;

		printf(", %d", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

