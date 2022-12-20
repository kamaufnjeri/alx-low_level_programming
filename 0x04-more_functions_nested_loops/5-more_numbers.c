#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 */
void more_numbers(void)
{
	char a;
	char b;

	b = '0'
	while (b <= '10')
	{
		for (a = '0'; a <= '14'; a++)
		{
			if (a >= '10')
			{
				_putchar('1');
				_putchar(a % 10);
		}
		_putchar('\n');
		b++;
	}
}
