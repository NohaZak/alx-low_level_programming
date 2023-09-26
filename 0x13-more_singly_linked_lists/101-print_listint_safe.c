#include "lists.h"
#include <stddef.h>

/**
 * r - reallocate mem to nde
 *
 * @list: the old list to append
 * @size: new list size
 * @new: new nde
 *
 * Return: new list ptr
 */
const listint_t **r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newLst;
	size_t g;

	newLst = malloc(size * sizeof(listint_t *));
	if (newLst == NULL)
	{
		free(list);
		exit(98);
	}
	for (g = 0; g < size - 1; g++)
		newLst[g] = list[g];
	newLst[g] = new;
	free(list);
	return (newLst);
}

/**
 * print_listint_safe - print linked list
 * @head: ptr to list
 *
 * Return: no. of nde in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t g, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (g = 0; g < number; g++)
		{
			if (head == list[g])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (number);
			}
		}
		number++;
		list = r(list, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (number);
}
