#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the binary number
 * @index: index of binary number to be converted
 * Return: 1 if it worked and -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask;

	if (index > 32)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;
	return (1);
}

