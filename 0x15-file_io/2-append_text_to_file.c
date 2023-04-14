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
	int result = -1;
	int counter = 0;

	fd = fopen(filename, "a+");

	if (fd == NULL)
	{
		return (result);
	}
	if (text_content)
	{
		while (text_content[counter])
		{
			counter++;
		}
		result = fwrite(text_content, sizeof(char), counter, fd);
		if (result < 0)
		{
			fclose(fd);
			return (result);
		}
	}
	fclose(fd);
	return (1);
}

