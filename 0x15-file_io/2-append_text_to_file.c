#include "main.h"
/**
 * append_text_to_file - it  appends text at the end of a file
 * @filename: a pointer to the name file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	q = open(filename, O_WRONLY | O_APPEND);
	w = write(q, text_content, len);
	if (q == -1 || w == -1)
		return (-1);
	close(q);
	return (1);
}
