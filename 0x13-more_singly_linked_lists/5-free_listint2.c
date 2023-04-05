#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees the memory of a structure
 * @head: a pointer to the head of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	if (*head == NULL || head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		(*head) = node;
	}
}
