#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - it reads a text file and prints to the POSIX standard output
 * @filename: file being read
 * @letters:  number of letters it should read and print
 * Return: w - actual number of letters it could read and print
 * OR 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int wq;
	ssize_t w;
	ssize_t t;

	wq = open(filename, O_RDONLY);
	if (wq == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	t = read(wq, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	close(wq);
	free(buf);
	return (w);
}
