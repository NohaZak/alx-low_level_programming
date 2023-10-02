#include "main.h"

/**
 * _strlen - returns strng lenth
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
 * append_text_to_file - append txt to file
 * @filename: file name
 * @text_content: written txt
 *
 * Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	ssize_t byts = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	g = open(filename, O_WRONLY | O_APPEND);
	if (g == -1)
		return (-1);
	if (length)
		byts = write(g, text_content, length);
	close(g);
	return (byts == length ? 1 : -1);
}
