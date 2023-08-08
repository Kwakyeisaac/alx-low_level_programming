#include "main.h"
/**
 * create_file - It creates a files
 * @filename: a pointer that points to the name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int wq, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	wq = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(wq, text_content, len);
	if (wq == -1 || w == -1)
		return (-1);
	close(wq);
	return (1);
}
