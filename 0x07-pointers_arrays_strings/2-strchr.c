# include "main.h"
# include <string.h>
/**
 * _strchr - a function that checks for a particular char in a string
 * @s: parameter for a string to conduct the check
 * @c: parameter of a char being searched for in the string
 * Return: return char
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
		s++;

	}
	return (NULL);
}
