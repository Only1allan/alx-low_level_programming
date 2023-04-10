#include "main.h"
/**
 * get_bit - a function that gets the value of a bit at a certain index
 * @n: number to get bit value
 * @index: particular index of that number
 * Return: value at a particular index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
