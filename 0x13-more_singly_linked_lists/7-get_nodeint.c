#include "lists.h"

/**
 * get_nodeint_at_index - index
 * @head: 1st nde ptr
 * @index: index
 *
 * Return: nde ptr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nde;
	unsigned int n;

	for (nde = head, n = 0; nde && n < index; nde = nde->next, n++)
		;
	return (nde);
}

