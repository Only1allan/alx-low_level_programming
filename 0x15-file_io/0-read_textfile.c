#include "main.h"
#include <string.h>
/**
 * read_textfile - a funtion that prints to the standard output
 * @filename: name of a file
 * @letters: content of the file
 * Return: text file content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, file_r, f_write;
	char *setbuffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	setbuffer = malloc(sizeof(char) * letters);
	if (setbuffer == NULL)
	{
		return (0);
	}
	file_r = read(file_desc, setbuffer, letters);

	if (file_r == -1)
	{
		free(setbuffer);
		return (0);
	}
	f_write = write(STDOUT_FILENO, setbuffer, file_r);
	if (f_write == -1)
	{
		free(setbuffer);
		return (0);
	}
	free(setbuffer);
	close(file_desc);
	return (f_write);
}
