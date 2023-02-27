# include "main.h"
/**
 * swap_int - function that swaps the value of two variables
 * @a: first parameter for the function swap_int
 * @b: second parameter for the function swap_int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
