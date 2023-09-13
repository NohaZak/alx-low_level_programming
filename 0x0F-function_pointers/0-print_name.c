#include "function_pointer.h"

/** print_name - entry point of program function that prints a name
 *
 * @name: name
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
