#include "main.h"

/**
 * _islower - main function checks lowercase
 * @c: parameter
 *
 * Return: return 1 if success return 0 if error
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
