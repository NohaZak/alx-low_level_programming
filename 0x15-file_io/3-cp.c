#include "main.h"

#define USGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to %s\n"
#define ERROR_CLOSE "Error: Can't close fd %d\n"
#define PRMSSINS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * _copy_content - program
 * @ac: count
 * @av: vector
 *
 * Return: 1 or 0
 */
int _copy_content(int ac, char **av)
{
	int frm_g = 0, to_g = 0;
	ssize_t m;
	char buffer[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USGE), exit(97);
	frm_g = open(av[1], O_RDONLY);
	if (frm_g == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);
	to_g = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PRMSSINS);
	if (to_g == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);

	while ((m = read(frm_g, buffer, READ_BUFFER_SIZE)) > 0)
		if (write(to_g, buffer, m) != m)
			dprintf(STDERR_FILENO, ERROR_WRITE, av[2]), exit(99);
	if (m == -1)
		dprintf(STDERR_FILENO, ERROR_READ, av[1]), exit(98);

	frm_g = close(frm_g);
	to_g = close(to_g);
	if (frm_g)
		dprintf(STDERR_FILENO, ERROR_CLOSE, frm_g), exit(100);
	if (to_g)
		dprintf(STDERR_FILENO, ERROR_CLOSE, frm_g), exit(100);

	return (EXIT_SUCCESS);
}
