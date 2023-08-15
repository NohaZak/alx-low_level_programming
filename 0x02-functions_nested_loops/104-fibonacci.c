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
	int counter = 2;

	float x = 1, y = x + 1, z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
