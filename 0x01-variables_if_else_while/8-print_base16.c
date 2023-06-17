#include <stdio.h>
/**
 * main - Printing numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		putchar(n + '0');
	}
		putchar('\n');
	return (0);
}
