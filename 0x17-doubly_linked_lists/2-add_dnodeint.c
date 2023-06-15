#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the begining
 * @head: a pointer to the head of the dll
 * @n: n represents value to b inserted
 *Return: address of the new element or null if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (head == NULL)
		*head = node;
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
