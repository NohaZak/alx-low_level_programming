#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry poinmt
 * @ac: count
 * @av: vector
 *
 * Return: 1 or 0
 */
int main(int ac, char **av)
{
	int from_g = 0, to_g = 0;
	ssize_t m;
	char buffer[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_g = open(av[1], O_RDONLY);
	if (from_g == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_g = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_g == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((m = read(from_g, buffer, READ_BUFFER_SIZE)) > 0)
		if (write(to_g, buffer, m) != m)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (m == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_g = close(from_g);
	to_g = close(to_g);
	if (from_g)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_g), exit(100);
	if (to_g)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_g), exit(100);

	return (EXIT_SUCCESS);
}

