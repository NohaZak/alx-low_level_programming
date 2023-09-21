#include "lists.h"

/**
 * _strlen - string length
 * @str: the string
 *
 * Return: int
 */
int _strlen(char *str)
{
	int a = 0;

	if (!str)
		return (0);
	while (*str++)
		a++;
	return (a);
}

/**
 * print_list - print linked list
 * @h: pointer 1st node
 *
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		a++;
	}
	return (a);
}
