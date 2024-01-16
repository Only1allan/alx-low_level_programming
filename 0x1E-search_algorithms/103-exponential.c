#include "search_algos.h"
/**
* exponential_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, high = size - 1, mid;

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= size)
		high = size - 1;
	else
		high = i;
	low = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
