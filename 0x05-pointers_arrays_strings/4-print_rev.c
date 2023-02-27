# include "main.h"
# include <string.h>
/**
 * print_rev - function that reverses a string
 * @s: parameter to the function print_rev
 * Return: void
 */

void print_rev(char *s)
{
	int l = strlen(s);

	for (int i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}


