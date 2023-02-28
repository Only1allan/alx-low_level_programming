# include "main.h"
# include <string.h>
/**
 * print_rev - function that reverses a string
 * @s: parameter to the function print_rev
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}


