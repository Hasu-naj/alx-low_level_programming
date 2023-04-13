#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: number of argument
 * @argv: pointer of pinters
 *
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char **argv)
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
	}
	else
	{
		cents = atoi(argv[1]);

		num_coins = cents / 25;
		cents = cents % 25;

		num_coins += cents / 10;
		cents = cents % 10;

		num_coins += cents / 5;
		cents = cents % 5;

		num_coins += cents / 2;
		cents = cents % 2;

		num_coins += cents;
		printf("%d\n", num_coins);
	}
	return (0);
}
