#include "main.h"

/**
 * read_textfile - read txt and prnt
 * @filename: file name
 * @letters: byts nmbr
 *
 * Return: nmbr of prntd byts
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int g;
	ssize_t byts;
	char bf[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);
	g = open(filename, O_RDONLY);
	if (g == -1)
		return (0);
	byts = read(g, &bf[0], letters);
	byts = write(STDOUT_FILENO, &bf[0], byts);
	close(g);
	return (byts);
}
