#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: integer
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;

	if (ld < 0)
	{
		ld = -1 * ld;
	}
	_putchar(ld + '0');
	return (ld);
}
