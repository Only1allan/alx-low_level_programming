#include "main.h"
/**
 * append_text_to_file - a function that appends text to file
 * @filename: pointer to the file name 
 * @text-content: pointer to the file content
 * Return: 1 as a success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_);

	if (fd == -1)
		return (-1);

