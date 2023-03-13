# include "main.h"
/**
 * _isalpha - function that checks if a character is an alphabet or not
 * @c: paremeter for the function _isalpha
 * Return: void
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
