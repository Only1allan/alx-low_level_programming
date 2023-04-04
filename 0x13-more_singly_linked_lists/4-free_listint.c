#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees memory of a linked list
 * @head: a pointer to the head of the linked list
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
