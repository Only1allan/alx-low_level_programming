#include "lists.h"
/**
 * sum_dlistint - sums all data of a linkedlist
 * @head: pointer to the beginning of the list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
