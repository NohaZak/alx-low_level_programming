#include "lists.h"

/**
 * sum_listint - total
 * @head: 1st nd ptr
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
