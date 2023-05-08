#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content to be written to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, data, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	data = write(fd, text_content, i);
	if (data < 0)
		return (-1);

	close(fd);
	return (1);
}

