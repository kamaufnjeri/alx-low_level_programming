#include "main.h"

/**
 * puts_half - prints half string
 * @str: input
 */
void puts_half(char *str)
{
	int i, len = 0, mid;
	char *temp;
	
	while (str[len] != '\0')
	{
		len++;
	}
	mid= len / 2;
	for (i = mid; i <= len; i++)
	{
		temp[i - mid] = str[i];
		_putchar(temp[i - mid]);
	}
	_putchar('\n');
}
