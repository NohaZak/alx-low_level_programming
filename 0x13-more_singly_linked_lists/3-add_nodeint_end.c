#include "lists.h"

/**
 * add_nodeint_end - add de to end
 * @head: 1st nde ptr
 * @n: new nde
 *
 * Return: new nde otr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNde = malloc(sizeof(listint_t));
	listint_t *nde;

	if (!head || !newNde)
		return (NULL);

	newNde->next = NULL;
	newNde->n = n;
	if (!*head)
		*head = newNde;
	else
	{
		nde = *head;
		while (nde->next)
			nde = nde->next;
		nde->next = newNde;
	}
	return (newNde);
}
