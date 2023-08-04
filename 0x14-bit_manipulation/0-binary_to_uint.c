#include "main.h"
/**
 * binary_to_uint - it converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 characters
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_num = 0;

	if (!b)
		return (0);
	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[p] - '0');
	}
	return (dec_num);
}
