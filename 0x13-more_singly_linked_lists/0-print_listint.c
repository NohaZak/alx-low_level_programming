#include "lists.h"

/**
 * print_listint - print linked l;ist
 * @h: pointer 1st nde
 *
 * Return: list size
 */
size_t print_listint(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		b++;
	}
	return (b);
}
