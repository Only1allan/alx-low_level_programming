#include "search_algos.h"
/**
 * binary_search - an implementation of the binary search algorithm
 * @size: size of the array
 * @array: pointer to the first element of the array
 * @value: target to be searched
 * Return: index of value hence -1
 */
int binary_search(int *array, size_t size, int value)
{
	int first = 0, middle;
	int last = size - 1;
	int i = 0;

	while (first <= last)
	{
		middle = (first + last) / 2;
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i != last)
				printf(", ")
		}
		printf("\n");
		if (array[middle] < value)
		{
			first = middle + 1;
		}
		else if (array[middle] == value)
		{
			return (middle);
		}
		else
		{
			last = middle - 1;
		}
	}
	return (-1);
}
