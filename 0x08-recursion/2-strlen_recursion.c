# include "main.h"
/**
 * _strlen_recursion - a function that returns strlen
 * @s: parameter of pointer to string
 * Return: 0 always a success
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
