#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int password_length;
	char password;

	srand(time(NULL));

	while (password_length <= 2645)
	{
		password = rand() % 128;
		password_length += password;
		putchar(password);
	}
	putchar(2772 - password_length);
	return (0);
}


