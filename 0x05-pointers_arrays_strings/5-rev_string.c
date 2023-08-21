#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	char tmp;
	int rev;


	while (s[length] != '\0')
		++length;

	for (rev = 0; rev < length / 2; rev++)
	{
		tmp = s[rev];
		s[rev] = s[length - 1 - rev];
		s[length - 1 - rev] = tmp;
	}
}
