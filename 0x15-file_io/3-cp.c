#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int wq);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: the name file buffer is storing chars for
 *
 * Return: A pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - It closes the file discriptors
 * @wq: The file discriptor to be closed.
 */
void close_file(int wq)
{
	int k;

	k = close(wq);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close wq %d\n", wq);
		exit(100);
	}
}
/**
 * main - It copies the content of the file to another file.
 * @argc: the number args that was supplied to the program
 * @argv: An array of pointer to the args
 *
 * Return: 0 (Success).
 *
 * Description: if the file_to or file_from cannot close - exit code 100
 * if file_to cannot be created or written - exit code 99
 * if file_from can't be read or does'nt exist - exit code 98
 * if argument count is incorrect - exit code 97.
 */
int main(int argc, char *argv[])
{
	int to, from, k, l;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: p file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		l = write(to, buffer, k);
		if (to == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		k = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (k > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
