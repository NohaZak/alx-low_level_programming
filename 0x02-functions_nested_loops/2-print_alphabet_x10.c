#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always return 0 for succeess
 */

void print_alphabet_x10(void)
{
       char i, h;
       
       for (i = 0; i <= 9; i++)
       {
	       for (h = 'a'; h <= 'z'; h++)
	       {
		       _putchar(i);
	       }
	       _putchar('\n');
       }
}
