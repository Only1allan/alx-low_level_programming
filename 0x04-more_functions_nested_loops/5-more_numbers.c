# include "main.h"
/**
 * more_numbers - a function that prints 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	char y;

	for (n = 0; n <= 10; n++)
	{
		for (y = 0; y <= 14; y++)
		{
			int z = y;
			_putchar(z / 10);
			_putchar(z % 10);
		}
		_putchar('\n');
	}
}
