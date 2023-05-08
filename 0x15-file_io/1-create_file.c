#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: a pointer to the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nw;
	size_t text_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		nw = write(fd, text_content, text_len);
		if (nw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
