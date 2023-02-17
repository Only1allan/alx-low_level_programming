#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: 0 Always Success
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
       /* scan last digit of n*/
	l = n % 10;
	printf("Last digit of %d\n", l);
	if (l > 5)
		printf("and is greater than 5\n");
	else if (l < 6 && l != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	return (0);
}
