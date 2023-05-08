#include "main.h"
#include <stdlib.h>

/**
 *  read_textfile- Read text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read and print
 *
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	size_t nw;
	size_t nr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nr = read(fd, buffer, letters);

	nw = write(STDOUT_FILENO, buffer, nr);

	free(buffer);
	close(fd);
	return (nw);
}
