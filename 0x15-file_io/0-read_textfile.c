#include "main.h"
/**
 *read_textfile - read text file and print to the POSIX standard output
 *@filename: the file to read
 *@letters: number of to print
 *Return: the actual number of letters it could reand and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, read_letters;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, 0, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_letters = read(fd, buffer, letters);

	if (read_letters == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
	}

	close(fd);
	free(buffer);
	return (read_letters);
}
