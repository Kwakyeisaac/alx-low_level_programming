#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the character c to stdout
 * @q: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropirately
 */
int _putchar(char q)
{
	return (write(1, &q, 1));
}
