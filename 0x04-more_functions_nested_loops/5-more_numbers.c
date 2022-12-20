#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar('1');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
