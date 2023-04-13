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
	FILE *file_desc;
	char setbuffer;
	size_t track;
	size_t storage;

	track = 0;
	if (filename == NULL)
	{
		return (0);
	}
	file_desc = fopen(filename, "r");
	if (file_desc == NULL)
	{
		return (0);
	}
	setbuffer = fgetc(file_desc);// storage = freads(setbuffer, sizeof(char), sizeof(setbuffer), file_desc);
	while (track < letters)
	{
		if (setbuffer == -1)
		{
			fclose(file_desc);
			return (track);
		}
		if (write(1, &setbuffer, 1) == -1)
		{
			free(setbuffer);
			fclose(file_desc);
			return (0);
		}
		track++;
		setbuffer = fgetc(file_desc);
	}
	free(setbuffer);
	fclose(file_desc);
	return (track);
}
