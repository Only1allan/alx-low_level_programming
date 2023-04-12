#include "main.h"
#include <stdio.h>
/**
 * print_binary - a function that prints binary rep of a number
 * @n: value of number
 * Return: n
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
