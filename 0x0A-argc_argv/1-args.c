#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: Number of arguments commands
 * @argv: Array of commands value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		printf("%d\n", argc - 1);
		*argv = argv[argc];
	}

	return (0);
}
