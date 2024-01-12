#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to standard out put
 * @c: the character to be printed
 *
 * Return: return 0 on success
 * return -1 on error and set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
