#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return:1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int bytes;

	if (filename == NULL)
		return (-1);

	while (text_content)
	{
		len++;
		text_content++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
