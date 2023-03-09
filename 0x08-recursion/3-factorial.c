# include "main.h"
/**
 * factorial - a function that return factorial of n
 * @n: parameter for the function
 * Return: 0 always a success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
