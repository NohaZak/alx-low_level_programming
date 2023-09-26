#include "lists.h"

/**
 * find_listint_loop_FL - find loop
 *
 * @head: lnkd list
 *
 * Return: address
 */
listint_t *find_listint_loop_FL(listint_t *head)
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

/**
 * free_listint_safe - free list even if loop
 *
 * @h: list head
 *
 * Return: no of free nde
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopNde;
	size_t length;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopNde = find_listint_loop_FL(*h);
	for (length = 0; (*h != loopNde || loop) && *h != NULL; *h = next)
	{
		length++;
		next = (*h)->next;
		if (*h == loopNde && loop)
		{
			if (loopNde == loopNde->next)
			{
				free(*h);
				break;
			}
			length++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (length);
}
