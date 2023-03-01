#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *@s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s);
		s--;
		_putchar(*s);
	}
	else
		_putchar('\n');
}
