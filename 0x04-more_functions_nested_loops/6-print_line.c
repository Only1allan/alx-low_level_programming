# include "main.h"
/**
 * print_line - prints a straightline in the terminal
 * @n: argument for the function print_line
 * Return: void
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
