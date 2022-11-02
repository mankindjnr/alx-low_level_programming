#include "main.h"
#include <errno.h>

/**
 *create_file - function that creates a file
 *@filename: name of file to create
 *@text_content: the contents of the file to create
 *Return: 1 on success -1 on failur
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";



	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);

	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, S_IRUSR | S_IWUSR);
			if (fd < 0)
				return (-1);
		}
		else
			return (-1);
	}

	write(fd, text_content, strlen(text_content));
	close(fd);
	unlink(filename);

	return (1);
}
