#include <stdio.h>

/**
 * main -Entry 
 * a function that prints the size of a data type in bytes
 */

int main(void)
{
printf("The size of char : %c byte(s)\n", sizeof(char));
printf("The size of int : %d byte(s)\n", sizeof(int));
printf("The size of long : %li byte(s)\n", sizeof(long));
printf("The size of double : %lf byte(s)\n", sizeof(double));
return (0);
}
