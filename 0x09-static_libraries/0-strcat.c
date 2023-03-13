# include "main.h"

/**
 * _strcat- function that concatenates two strings
 * @dest: string to recieve conc paramter for the function
 * @src: string to join parameter for the fucntion
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
