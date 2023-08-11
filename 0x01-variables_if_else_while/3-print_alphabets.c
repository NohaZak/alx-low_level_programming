#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: print alphabets in lower case and in UPPERCASE
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print a to z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/* print A to Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
