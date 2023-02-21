#include "main.h"

/**
 * puts_half - prints half string
 * @str: input
 */
void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
