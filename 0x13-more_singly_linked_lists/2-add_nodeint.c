#include "lists.h"

/**
 * add_nodeint - add nde to beginning
 * @head: 1st nde ptr
 * @n: new nde
 *
 * Return: new nde ptr
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
