#include "main.h"

/**
 * _strlength - find length of string
 *
 * @s: string
 *
 * Return: int
 */

int _strlength(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: int
 * @av: arguments
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0, mc = 0, j = 0, cmput = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, mc++)
		mc += _strlength(av[i]);

	s = malloc(sizeof(char) * mc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmput++)
			s[cmput] = av[i][j];

		s[cmput] = '\n';
		cmput++;
	}
	s[cmput] = '\0';
	return (s);
}
