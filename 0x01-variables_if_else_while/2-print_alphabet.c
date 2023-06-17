#include <stdio.h>

/**
 *  main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char a = 'a';

	for (i = a; i <= 'z'; i++)
	{
		printf("%c ", i);
	}
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
