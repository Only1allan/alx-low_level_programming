#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a fucntion that prints elements of a node
 * @h: a pointer to the structure list_int_s
 *
 * Return: length of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;
	
	temp = h;
	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
