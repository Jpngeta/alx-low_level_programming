#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT_FILENO
 * @filename: text file to be read
 * @letters: the number of letters it should read and print
 * Return: wr - Actual number of letters it could read and print
 *         0 - Filename is NULL or file fails or file cannot be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t wr;
	ssize_t rd;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fd);
	return (wr);
}

