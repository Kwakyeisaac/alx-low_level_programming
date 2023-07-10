#include <stdio.h>
/**
 * main - print all arguments it recieve
 * @argc: number of comand line argument.
 * @argv: array that contain the program comand line arg.
 * Return: (0) when successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
