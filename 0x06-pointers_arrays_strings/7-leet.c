#include "main.h"

/**
 * leet - encode string 1337
 *
 * @ l: string
 *
 * Return: encoded string
 */

char *leet(char *l)
{
	char *lp = l;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*l)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*l == key[i] || *l == key[i] + 32)
			{
				*l = 48 + value[i];
			}
		}
		l++;
	}

	return (lp);
}
