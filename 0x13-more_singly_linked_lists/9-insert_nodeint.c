#include "lists.h"

/**
 * insert_nodeint_at_index - new nde at index
 * @head: 1st nde ptr add
 * @idx: index
 * @n: n new nde
 *
 * Return: new nde add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nde, *newNde = malloc(sizeof(listint_t));
	unsigned int d = 0;

	if (!head || !newNde)
		return (NULL);

	newNde->n = n;
	newNde->next = NULL;
	if (!idx)
	{
		newNde->next = *head;
		*head = newNde;
		return (newNde);
	}
	nde = *head;
	while (nde)
	{
		if (d == idx - 1)
		{
			newNde->next = nde->next;
			nde->next = newNde;
			return (newNde);
		}
		d++;
		nde = nde->next;
	}
	free(newNde);
	return (NULL);
}
