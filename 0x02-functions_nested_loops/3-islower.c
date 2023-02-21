/*# include "main.h"*/
# include <stdio.h>
# include <ctype.h>
/**
 * main - Entry point
 * Return: 0 always a success
 */
int main(void)
{
	int r;

    r = islower('H');
    putchar(r + '0');
    r = islower('o');
    putchar(r + '0');
    r = islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
	
}
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
	
}
