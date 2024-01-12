#include "main.h"

/**
 * _isalpha - main function of the program checks alphabatecs
 * @c: Paramater
 *
 * Return: Return 0 for error and 1 for success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
