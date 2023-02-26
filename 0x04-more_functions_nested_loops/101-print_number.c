#include "main.h"

/**
 * print_number -  function that prints an integer.
 * @n: n integer
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	num = n
	if (n > 9)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0')
}
