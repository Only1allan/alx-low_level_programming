#include "main.h"
/**
 * append_text_to_file - a function that appends text to file
 * @filename: pointer to the file name
 * @text_content: pointer to the file content
 * Return: 1 as a success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	size_t len;
	size_t result;

	fd = fopen(filename, "a+");

	if (fd == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}

	len = strlen(text_content);
	result = fwrite(text_content, sizeof(char), len, fd);

	if (result != len)
	{
		fclose(fd);
		return (-1);
	}
	fclose(fd);
	return (1);
}

