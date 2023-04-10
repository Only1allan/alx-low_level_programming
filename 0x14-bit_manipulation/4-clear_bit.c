#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0
 * @n: a pointer to the binary
 * @index: index of each string pointer
 * Return: value of the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}