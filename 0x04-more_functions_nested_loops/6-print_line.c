#include "main.h"

/**
 * print_line - a function that draaws straight line on terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n')
	}
}
