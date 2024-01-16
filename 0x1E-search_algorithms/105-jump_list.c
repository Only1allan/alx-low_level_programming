#include "search_algos.h"
/**
* jump_list - searches for a value in a sorted list of integers
* @list: pointer to the head of the list to search in
* @size: number of nodes in list
* @value: value to search for
* Return: pointer to the first node where value is located
*         or NULL if not found
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);
	listint_t *tmp = list, *tmp2 = list;

	if (!list)
		return (NULL);

	while (tmp->index < jump)
	{
		tmp = tmp->next;
		i++;
		if (i >= size)
			break;
	}
	printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
	tmp2->index, tmp->index);
	while (tmp2->index < tmp->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmp2->index, tmp2->n);
		if (tmp2->n == value)
			return (tmp2);
		tmp2 = tmp2->next;
		if (tmp2->index == tmp->index)
			break;
	}
	return (NULL);
}
