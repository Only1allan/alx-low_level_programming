#include "main.h"
/**
 * get_bit - a function that returns value of a bit at a given index
 * @n: integer value of binary in base 10
 * @index: index you want to read the bit value
 * Return: bit a a specific index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int shift;

	if (index > 32)
		return (-1);

	shift = (n >> index) & 1;
	return (shift);
}
