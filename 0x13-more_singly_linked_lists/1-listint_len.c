#include "lists.h"

/**
 * listint_len - print linked list
 * @h: 1st nde ptr
 *
 * Return: list size
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
