# include "main.h"
/**
 * _puts - function that prints a string
 * @str: parameter for the function _puts
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
