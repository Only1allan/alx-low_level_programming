# include <stdio.h>
/**
 * main - function that prints all single digits numbers of base 10 from 0
 * Return: 0 always a success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
