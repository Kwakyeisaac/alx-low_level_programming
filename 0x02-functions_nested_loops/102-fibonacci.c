#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, staring with 1 and 2
 * fllowed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, sum;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%1d, ", j);
		}
		else
		{
			printf("%1d\n", j);
		}
		sum = j + k;
		j = k;
		k = sum;
	}
	return (0);
}
