#include "main.h"

/**
 * _strlen - returns string lnth
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - create file
 * @filename: file name
 * @text_content: txt
 *
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int g;
	ssize_t byts = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	g = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (g == -1)
		return (-1);
	if (length)
		byts = write(g, text_content, length);
	close(g);
	return (byts == length ? 1 : -1);
}
