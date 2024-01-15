#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array
* @size: number of elements in array
* @value: value to search for
* Return: first index where value is located and -1 if none
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}
