#include "main.h"
/**
 * _pow_recursion - a functon that return x ** y
 * @x: parameter of the function
 * @y: paramter of the functon
 * Return: 0 always a success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
