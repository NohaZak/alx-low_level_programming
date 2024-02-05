#include "lists.h"

/**
 * free_listint - free int list
 * @head: 1st nde ptr
 *
 * Return: Nothinf
 */
void free_listint(listint_t *head)
{
	listint_t *nde;

	while (head)
	{
		nde = head;
		head = head->next;
		free(nde);
	}
}
