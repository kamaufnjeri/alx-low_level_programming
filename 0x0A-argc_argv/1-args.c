#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: count of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char __atribute__ ((__unused__)) *argv[])
{

	printf("%d\n", argc-1);
	return (0);
}
