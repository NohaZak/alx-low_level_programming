#include "lists.h"

/**
 * find_listint_loop - loop in linked list
 *
 * @head: lnkd lst
 *
 * Return: add of loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *bottom;

	if (head == NULL)
		return (NULL);
	for (bottom = head->next; bottom != NULL; bottom = bottom->next)
	{
		if (bottom == bottom->next)
			return (bottom);
		for (p = head; p != bottom; p = p->next)
			if (p == bottom->next)
				return (bottom->next);
	}

	return (NULL);
}
