#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at nth index
 * @head: head of node
 * @index: index with element to be deleted
 * Return: 1 succeed, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (count = 0; temp != NULL && count < index - 1; count++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	if (temp->next->next != NULL)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		return (1);
	}
	else
	{
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	return (-1);
}
