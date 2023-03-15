#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of commands in an arguments
 * @argv: values of the commands in an arguments
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int money, minimum_coins, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	money = atoi(argv[1]);
	minimum_coins = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && money >= 0; a++)
	{
		while (money >= coins[a])
		{
			minimum_coins++;
			money = money - coins[a];
		}
	}
	printf("%d\n", minimum_coins);
	return (0);
}
