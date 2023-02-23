# include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: argumnt for the function print_diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int d;
	int g;

	for (g = 0; g < n; g++)
	{
		for (d = 0; d <= g; d++)
		{
			if (g == d)
				_putchar('\\');
			else
				_putchar(' ');
		}
	}
	_putchar('\n');
}
