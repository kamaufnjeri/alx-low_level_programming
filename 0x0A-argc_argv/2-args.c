#include <stdio.h>

/**
 * main - rite a program that prints all arguments it receives.
 * @argc: count of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
