# include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lower case ten times
 * Return: 0 always a success
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		_putchar(a);
		_putchar('\n');
	}
	_putchar('\n');
}
