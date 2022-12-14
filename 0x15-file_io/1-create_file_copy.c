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

	if ((fd = creat(filename, S_IRUSR | S_IWUSR)) < 0)
	{
		return (-1);
	}
	else
	{
		write(fd, text_content, strlen(text_content));
		close(fd);
	}
	return (1);
}
