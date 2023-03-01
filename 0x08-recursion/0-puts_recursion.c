#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *@s: string to be printed
 *
 */

void _puts_recursion(char *s)
{
	int i, len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
		_puts_recursion(s[i++]);
	}
	_putchar('\n');
}
