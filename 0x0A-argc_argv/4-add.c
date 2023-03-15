#include <stdio.h>
#include <stdlib.h>

int numeric(char *s);

/**
 * main - A program that adds positive numbers
 * @argc: argument commands counts
 * @argv: argument commands values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, a;

	for (a = 1; a < argc; a++)
	{
		if (numeric(argv[a]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
