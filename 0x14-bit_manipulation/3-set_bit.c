#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: a pointer to the binary number
 * @index: index of binary to be converted to 1
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 32)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}


