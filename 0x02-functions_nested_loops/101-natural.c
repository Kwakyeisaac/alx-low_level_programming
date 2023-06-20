#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *  that are multiples of 3 or 5.
 *  Return: Always 0.
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;

	for (int i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}
