#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a fucntion that prints elements of a node
 * @h: a pointer to the structure list_int_s
 * Return: 0 always a success
 */
size_t print_listint(const listint_t *h)
{
	size_t temp;
	for (temp = 0; h; temp++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (temp);
}
