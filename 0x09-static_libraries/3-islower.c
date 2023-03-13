# include "main.h"
# include <ctype.h>
/**
 * _islower - function that says if a character is an alphabet in lowercase
 * @c: parameter for the function is lower
 * Return: void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
