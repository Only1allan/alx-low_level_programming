# include "main.h"
/**
 * _print_rev_recursion - a function that reverses a strin
 *@s: parameter for the function
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
