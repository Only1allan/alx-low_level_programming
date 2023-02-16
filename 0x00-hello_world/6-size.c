#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("The size of char : %zu byte(s)\n", sizeof(c));
printf("The size of int : %zu byte(s)\n", sizeof(i));
printf("Size of long int : %zu byte(s)\n", sizeof(li));
printf("Size of long long int: %zu byte(s)\n", sizeof(lli));
printf("Size of float : %zu byte(s)\n", sizeof(f));
return (0);
}
