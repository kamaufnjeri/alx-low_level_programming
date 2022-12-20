#include "main.h"

/**
 * print_most_numbers - prints 0-1 except 2,4
 */
void print_most_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b != '2' && b != '4')
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
