#include "function_pointers.h"

/**
 * main - main function
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int r;

	if (argc != 2)
		printf("Error\n"), exit(1);
	r = atoi(argv[1]);
	if (r < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *ptr++, r ? " " : "\n");
	return (0);
}
