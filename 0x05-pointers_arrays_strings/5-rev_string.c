# include "main.h"
# include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: a varibale for the function rev_string
 * Return: void
 */

void rev_string(char *s)
{
	int l = strlen(s);
	int i;

	for (i = l - 1; i >= 0; i--)
	{	
		_putchar(s[i]);
	}
	_putchar('\n');

}
