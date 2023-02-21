# include <stdio.h>
/**
 * main - prints out alphabets in lower case
 * print_alphabet-function definition of print alphabet
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
		putchar(a);
	putchar('\n');
}
