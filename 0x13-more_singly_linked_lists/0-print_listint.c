#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a fucntion that prints elements of a node
 * @h: a pointer to the structure list_int_s
 * Return: length of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t temp = 0;

	while(node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		temp++;
	}
	return (temp);
}
