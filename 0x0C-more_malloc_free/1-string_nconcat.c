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
	unsigned int a, b, s1_length, s2_length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	string = malloc(s1_length + n + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		string[a] = s1[a];
	}

	for (b = 0; b < n; b++)
	{
		string[b] = s2[b];
		a++;
	}

	string[a] = '\0';
	return (string);
}
