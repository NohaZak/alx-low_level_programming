#include "lists.h"

/**
 * free_list - frees list
 * @head: ptr to head
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *node, *nextNode;

	if (!head)
		return;

	node = head;
	while (node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
