#include "main.h"


/**
 *create_file - function that creates a file
 *@filename: name of file to create
 *@text_content: the contents of the file to create
 *Return: 1 on success -1 on failur
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	write(fd, text_content, strlen(text_content));
	close(fd);
	unlink(filename);

	return (1);
}
