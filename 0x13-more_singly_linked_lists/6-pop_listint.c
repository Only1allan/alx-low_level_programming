#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the node head
 * @head: pointer to the head of the list
 * Return: 0 always a success
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int data;

	if (*head != NULL)
		return (0);
	data = (*head)->n;
	node =(*head)->next;
	free(node);
	return (data);
}
