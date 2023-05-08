#include "main.h"
/**
 * main - copies content of file a to file b
 * @argc: number of arguments passed
 * @argv: array of pointer arguments
 * Return: 0 always a success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	validate_arguments(argc, argv);

	fd_from = open_file_for_reading(argv[1]);
	fd_to = open_file_for_writing(argv[2]);

	copy_file_contents(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * validate_arguments - validates the command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success, or an exit status on failure
 */
int validate_arguments(int argc, char **argv)
{
	(void)argv;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	return (0);
}

/**
 * open_file_for_reading - opens a file for reading
 * @filename: name of the file to open
 *
 * Return: file descriptor on success, or an exit status on failure
 */
int open_file_for_reading(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename), exit(98);

	return (fd);
}

/**
 * open_file_for_writing - opens a file for writing
 * @filename: name of the file to open
 *
 * Return: file descriptor on success, or an exit status on failure
 */
int open_file_for_writing(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename), exit(99);

	return (fd);
}

/**
 * copy_file_contents - copies the contents of one file to another
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void copy_file_contents(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER];

	while ((bytes_read = read(fd_from, buffer, BUFFER)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1) {
			dprintf(STDERR_FILENO,
				"Error: Can't write to destination file\n"), exit(99);
		}
	}

	if (bytes_read == -1) {
		dprintf(STDERR_FILENO,
			"Error: Can't read from source file\n"), exit(98);
	}
}

/**
 * close_file - closes a file descriptor
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	int ret;

	ret = close(fd);
	if (ret == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd), exit(100);
}
