#include "main.h"
/**
 * get_endianness - a function that checks the endianness of a test value
 * Return: 0 for big endianess and 1 for little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *pointer = (char *)&num;

	if (*pointer == 1)
		return (1);
	else
		return (0);
}

