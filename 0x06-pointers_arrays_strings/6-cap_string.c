#include "main.h"
#include <stdio.h>

/**
 * isLower - determines lowercase
 *
 * @a: character
 *
 * Return: 1 if success, 0 if fail
 */

int isLower(char a)
{
	return (a >= 97 && a <= 122);
}

/**
 * isDelimiter - determines delimiter
 *
 * @d: character
 *
 * Return: 1 if success, 0 if fail
 */

int isDelimiter(char d)
{
	int s;
	char delimiter[] = " ;\t\n,.!?\"(){}";

	for (s = 0; s < 12; s++)
		if (d == delimiter[s])
			return (1);
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	char *p = str;
	int foundDeli = 1;

	while (*str)
	{
		if (isDelimiter(*str))
		{
			foundDeli = 1;
		}
		else if (isLower(*str) && foundDeli)
		{
			*str -= 32;
			foundDeli = 0;
		}
		else
		{
			foundDeli = 0;
			str++;
		}
	}
	return (p);
}
