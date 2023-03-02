#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0, c0 = 25, c1 = 10, c2 = 5, c3 = 2, c4 = 1;
	
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= c0)
			{
				coins += cents / c0;
				cents = cents % c0;
			}
			else if (cents >= c1)
			{
				coins += cents / c1;
				cents = cents % c1;
			}
			else if (cents >= c2)
			{
				coins += cents / c2;
				cents = cents % c2;
			}
			else if (cents >= c3)
			{
				coins += cents / c3;
				cents = cents % c3;
			}
			else
				coins += cents / c4;
				cents = cents % c4;
			printf("%d\n", coins);
		}
	}
	else
		printf("Error\n");
		return (1);
	return (0);
}
