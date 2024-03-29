#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
