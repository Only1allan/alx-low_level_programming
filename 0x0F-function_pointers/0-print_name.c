# include <stdio.h>
# include "function_pointers.h"
/**
 * print_name - a function that prints a name to the screen
 * @name : a parameter for the function
 * @f: is a pointer to the function
 * Return: a void function which return null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
