#include "main.h"
/**
 * is_palindrome - a fucntion that checks whether a string is a palindrome
 * @s: a pointer to the string being tested
 * Return: 1 for palindrome and 0 for not
 */
int is_palindrome(char *s)
{
	int  i, len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	for (i = 0; i < len / 2; i++)
	{
		if (*(s + i) != *(s + len - i - 1))
			return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - a function that returns strlen
 * @s: parameter of pointer to string
 * Return: 0 always a success
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
