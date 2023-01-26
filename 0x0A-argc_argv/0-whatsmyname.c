#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints its name, followed by a new line.
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
