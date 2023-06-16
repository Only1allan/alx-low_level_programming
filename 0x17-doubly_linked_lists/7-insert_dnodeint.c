#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: a pointer to the head of the list
 * @idx: an index to replace with n value
 * @n: value to be inserted in index n
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;

	if(idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current != NULL)
	{
		if (current->next == NULL && count == idx -1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == count)
		{
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
