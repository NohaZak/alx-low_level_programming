#include "lists.h"

/**
 * add_node - add node to head of list
 * @head: ptr tp head nde
 * @str: str field of node
 *
 * Return: list size
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	if (!head || !newHead)
		return (NULL);
	if (str)
	{
		newHead->str = strdup(str);
		if (!newHead->str)
		{
			free(newHead);
			return (NULL);
		}
		newHead->length = _strlen(new_head->str);
	}

	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
