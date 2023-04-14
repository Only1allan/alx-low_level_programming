#include "main.h"
#define BUFFER_SIZE 1024
/**
 *main - a function that copies the content of a file
 *@argc: 
 *@argv:
 *Return: 
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t content;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, 

