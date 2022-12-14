#include "main.h"

/**
 * times_table -n the timetable of nine
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 0)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar('0' + c);
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
