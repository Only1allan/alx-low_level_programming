#include "main.h"
/**
 * set_bit - a function that sets the value of a bit
 * @n: pointer to the binary
 * @index: index of the binary pointer
 * Return: value of a particular index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	else
		return (*n |= (1 << index));
}
