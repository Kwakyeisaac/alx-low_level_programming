#include "main.h"
/**
 * get_endianness - it checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *q = (char *) &p;

	return (*q);
}
