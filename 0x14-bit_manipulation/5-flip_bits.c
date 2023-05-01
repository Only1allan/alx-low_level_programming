#include "main.h"
/**
 * flip_bits - a function that flips bits
 * @n: parameter of one bit
 * @m: parameter for the other bit
 * Return: returns the number you should flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int track = 0;
	unsigned int o = n ^ m;

	while (o != 0)
	{
		track++;
		o &= o - 1;
	}
	return (track);
}
