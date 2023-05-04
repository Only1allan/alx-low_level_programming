#include "main.h"
/**
 * flip_bits - a function that flips bits and counts how many flips to next no
 * @m: first integer to compare
 * @n: second integer to compare with
 * Return: No of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int count = 0;

	xor = n ^ m;
	while (xor > 0)
	{
		if ((xor & 1) == 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
