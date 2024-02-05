#include "lists.h"

/**
 * pop_listint - pop head nde
 * @head: 1st nde ptr add
 *
 * Return: poped nde
 */
int pop_listint(listint_t **head)
{
	listint_t *nde;
	int n;

	if (!head || !*head)
		return (0);

	nde = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = nde;
	return (n);
}
