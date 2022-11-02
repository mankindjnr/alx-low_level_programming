#include "main.h"

/**
 *append_text_to_file - append text at teh end of a file
 *@filename: name of the textfiel
 *@text_content: the contentnts of teh file
 *Return: 1 if the file exists -1 if the file does not exist or
 *don't have the permission required to write to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
		/**
		 *my thinking is we are checking if we have the permission to
		 *write in this memory, on error file descriptors give negative
		 *values.
		 *every time we try to write we confirm if we have permissions
		 *write the memory of fd with one character each time from contn
		 */
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
