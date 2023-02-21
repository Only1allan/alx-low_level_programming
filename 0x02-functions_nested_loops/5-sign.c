# include "main.h"
/**
 * print_sign - function that checks the sign of a number
 * @n: parameter for the function print_sign
 * Return: void
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
