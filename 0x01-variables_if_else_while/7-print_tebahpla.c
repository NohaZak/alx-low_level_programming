#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: a program that prints the lowercase alphabet in reverse
 *
 * Return: Always return 0 for success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
