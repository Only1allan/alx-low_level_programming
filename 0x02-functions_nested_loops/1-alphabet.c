# include "main.h"
/**
 * print_alphabet -> function that prints alphabets to the screen
 * Return: void
 */


void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{	_putchar(a);
	_putchar('\n');
	}
}
