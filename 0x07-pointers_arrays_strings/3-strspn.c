# include "main.h"
# include <string.h>
/**
 * _strspn - a function that gets length of prefix substring
 * @s: paramete string for the function _strspn
 * @accept: value that is in the string s
 * Return: char s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, check = 0, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =0; accept != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				check = 1;
			}
		}

	}


}
