#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program print a quote using the write function
 *
 * Return: Always returns 1 to indicate successful execution.
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
