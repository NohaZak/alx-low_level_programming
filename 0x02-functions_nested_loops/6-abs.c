#include "main.h"

/**
 * _abs - main function get the absolute value
 * @n: parameter
 *
 * Return: return integer or integer times negative
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
