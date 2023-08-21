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
	int password_length = 10;
	int i;
	char password[11];

	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		password[i] = rand() % (126 - 33 + 1) + 33;
	}

	password[password_length] = '\0';

	printf("%s", password);

	return (0);
}


