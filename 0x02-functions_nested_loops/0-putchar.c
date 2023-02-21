# include "main.h"
/**
 * main - Function that prints __putchar to the screen
 * Return: 0 always a success
 */
int main(void)
{
	char message[] = "_putchar";
	int count = 0;

	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);


}
