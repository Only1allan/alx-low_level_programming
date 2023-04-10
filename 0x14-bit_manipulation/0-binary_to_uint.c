#include "main.h"
#include <string.h>
/**
 *binary_to_uint - a function that returns a integer from binary
 *@b: pointer to the binary string
 *Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0, base = 1;
	int len = strlen(b), i;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			conv_num += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
	}
	return (conv_num);
}
