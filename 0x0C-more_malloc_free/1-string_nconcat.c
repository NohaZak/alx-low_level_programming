#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	size_t a, b, c;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	string = malloc(sizeof(char) * (a + b + 1));

	if (string == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		string[c] = s1[c];
	for (c = 0; c < b; c++)
		string[c + a] = s2[c];
	string[a + b] = '\0';
	return (string);
}
