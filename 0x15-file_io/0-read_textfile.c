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
	while ((setbuffer = fgetc(file_desc)) != EOF && (track < letters))
	{
		if (write(1, &setbuffer, 1) == -1)
		{
			fclose(file_desc);
			return (0);
		}
		track++;
	}
	fclose(file_desc);
	return (track);
}
