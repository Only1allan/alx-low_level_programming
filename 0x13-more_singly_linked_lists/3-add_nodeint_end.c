#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a node at the end of the list
 * @head: pointer to the start of the list
 * @n: data to be stored
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (node);
}
