#include <stdio.h>
#include "main.h"
/**
 * binary_to _unit - a function that converts a binary to an integer
 * @b: string binary of a random number
 * Return: value of binary to integer
 *
 */

unsigned int binary_to_uint(const char *b);

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int converted_num = 0;
	int i = 0;
	
	if (b == NULL)
		return (0);

	while(b[i] != '\0')
	{

		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
		{
			converted_num = converted_num + base;
		}
		base = base *=2;
		i++;
	}
	return (converted_num);
