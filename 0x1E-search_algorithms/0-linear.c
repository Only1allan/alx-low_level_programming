#include "search_algos.h"
/**
 * linear_search - a function that implements linear search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: target we are looking for
 * Return: index of the value or -1 if array is empty or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
