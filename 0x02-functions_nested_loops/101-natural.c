#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *  that are multiples of 3 or 5.
 *  Return: Always 0.
 */
int main(void)
{
	int i, results;
	int endPoint = 1024;

	for (i = 0; i < endPoint; i++)
		if (i % 3 == 0 || i % 5 == 0)
			results += i;
	printf("%d\n", results);
	return (0);
}
