# include "main.h"
/**
 * print_alphabet - function that prints alphabets to the screen
 *
 * Return: 0 always a success
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
