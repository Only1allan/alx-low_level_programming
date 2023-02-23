# include <stdio.h>
/**
 * fizz_buzz - a function that prints fizbuzz in multiples of 3 and 5
 * Return: 0 always a succes
 */
int main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if ( i % 3 == 0)
			printf("Fizz");
		else if ( i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}	
	printf("\n");
	return 0;
}

