#include "main.h"
/**
 * print_binary - a function that converts an int to a binary
 * @n: parameter for the number to be converted to an int
 * Return: void
 */
void print_binary(unsigned long int n)
{
    int i, shift;
    for (i = 15; i >= 0; i--)
    {
       shift =  n >> i;
        if (shift & 1)
            _putchar('1');
        else
            _putchar('0');
    }
}

