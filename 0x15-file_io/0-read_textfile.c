#include "main.h"
/**
 * read_textfile - a function that reas a text file and prints it
 * @filename: a pointer to the file to be read
 * @letters: no of letters in the file
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, data, output;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	data = read(fd, buf, letters);
	if (data < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[data] = '\0';

	output = write(STDOUT_FILENO, buf, data);
	if (output < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (output);
}
