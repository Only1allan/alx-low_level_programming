#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that calculates sum of n numbers
 * @n: a parameter for the function
 * Return: 0 always a success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, const int);
		}
	}
	va_end(args);
	return (sum);
}
