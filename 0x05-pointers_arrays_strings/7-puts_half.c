#include "main.h"

/**
 * puts_half - prints half string
 * @str: input
 */
void puts_half(char *str)
{
	int i, len = 0, mid;
	
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		mid= len / 2;
	}
	else
	{
		mid = (len + 1) / 2;
	}
	for (i = mid; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
