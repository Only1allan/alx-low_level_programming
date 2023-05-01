#include "main.h"
/**
*create_file - function that creates a file
*@filename: pointer pointing to the file
*@text_content: pointer to the content of the file
*Return: 1 a success
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL && write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
