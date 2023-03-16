# include <stdlib.h>
# include <stdio.h>
# include "main.h"
/**
 * _calloc - function that concatenates two strings
 * @s1: parameter for the function
 * @s2: parameter for the function
 * @n: parameter for the function
 *Return: 0 always a success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
