#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints a quote using the write function
 *              write(int fd, *buf, size_t)
 *
 * Return 1 (Not Success)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
