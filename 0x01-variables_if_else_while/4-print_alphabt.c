#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: print the letters of the alphabet except for e and q
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
