#include "lists.h"

/**
 * free_listint2 - free int list
 * @head: 1st nde ptr add
 *
 * Return: nothinfg
 */
void free_listint2(listint_t **head)
{
	listint_t *nde, *tmp;

	if (!head)
		return;

	nde = *head;
	while (nde)
	{
		tmp = nde;
		nde = nde->next;
		free(tmp);
	}
	*head = NULL;
}
