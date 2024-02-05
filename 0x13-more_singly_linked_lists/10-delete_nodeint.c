#include "lists.h"

/**
 * delete_nodeint_at_index - dlte nde
 * @head: 1st nde ptr add
 * @index: index
 *
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nde, *prevNde;
	unsigned int e = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		nde = *head;
		*head = (*head)->next;
		free(nde);
		return (1);
	}
	nde = *head;
	while (nde)
	{
		if (e == index)
		{
			prevNde->next = nde->next;
			free(nde);
			return (1);
		}
		e++;
		prevNde = nde;
		nde = nde->next;
	}
	return (-1);
}
