#include "lists.h"
/**
 * free_dlistint - a function that frees list of a memory
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
