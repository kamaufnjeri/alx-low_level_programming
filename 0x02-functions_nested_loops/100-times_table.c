#include "main.h"

/**
 * print_times_table - print times table
 * @n: times table n
 * return: always 0
 */

void print_times_table(int n)
{
	int i = 0, j, k;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0' + k);
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar('0' + k / 100);
				_putchar('0' + (k - 100) / 10);
				_putchar('0' + k % 10);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
