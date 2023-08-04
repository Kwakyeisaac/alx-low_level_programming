#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @m: the next number
 * @n: the first number
 *
 * Return: the number of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int curr;
	unsigned long int exclu = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		curr = exclu >> p;
		if (curr & 1)
			count++;
	}
	return (count);
}
