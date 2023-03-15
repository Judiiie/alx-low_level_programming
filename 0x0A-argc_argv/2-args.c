#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: Number of arguments for commands
 * @argv: Values of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
