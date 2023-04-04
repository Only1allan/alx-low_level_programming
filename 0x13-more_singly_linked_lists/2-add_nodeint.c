#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a node at the start
 * @n: parameter for the function
 * @head: pointer to the structure head
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
