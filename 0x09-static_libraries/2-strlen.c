# include "main.h"
# include <string.h>
/**
 * _strlen - function that checks the length of a string
 * @s: parameter for the function
 * Return: void
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
