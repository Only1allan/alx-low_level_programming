#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a fucntion that prints elements of a node
 * @h: a pointer to the structure list_int_s
 * Return: length of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t temp = 0;

	while(h)
	{
		printf("%d\n", h->n);
		temp++;
		h = h->next;
	}
	return (temp);
}
