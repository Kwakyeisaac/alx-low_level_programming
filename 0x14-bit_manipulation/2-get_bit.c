#include "main.h"
/**
 * get_bit - it returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get
 * @n: the number to search
 *
 * Return: the value of the bit at index
 * Or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);
	bit_num = (n >> index) & 1;
	return (bit_num);
}
