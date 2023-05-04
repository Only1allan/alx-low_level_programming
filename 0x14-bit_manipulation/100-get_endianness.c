#include "main.h"
/**
 * get_endianness - a function that checks endianness
 * Return: 0 if big endian and 1 if small endian
 */
int get_endianness(void)
{
	unsigned int x;

	x = 1;

	if ((x & 255) == 1)
		return (1);
	else
		return (0);
}
