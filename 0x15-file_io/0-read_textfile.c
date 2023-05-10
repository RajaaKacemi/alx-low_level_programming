#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: pointer to the file
 * @letters:  is the number of letters it should read and print
 * Return: number of letters it could read and print
 * 0 if its fails, also if the filename is NULL, and if write fails
 * or it doses not  write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbrBytes, nbB;
	int fd;
	char *Buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	Buf = malloc(sizeof(char) * letters);
	nbrBytes = read(fd, Buf, letters);
	nbB = write(STDOUT_FILENO, Buf, nbrBytes);
	close(fd);
	return (nbB);
}
