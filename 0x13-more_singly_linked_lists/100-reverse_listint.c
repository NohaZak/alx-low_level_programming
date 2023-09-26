#include "lists.h"

/**
 * reverse_listint - rev intlist
 * @head: 1st nde ptr add
 *
 * Return: head add
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nde = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	nde = *head;
	*head = NULL;
	while (nde)
	{
		next = nde->next;
		nde->next = *head;
		*head = nde;
		nde = next;
	}
	return (*head);
}
