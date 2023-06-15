#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end of a linked list
 * @head: pointer to the first node of the linked list
 * @n: pointer to the value to be added
 * Return: added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *h;

	h = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (h == NULL)
	{
		*head = node;
		return (*head);
	}

	while (h->next != NULL)
		h = h->next;
	h->next = node;
	node->prev = h;

	return (node);
}


