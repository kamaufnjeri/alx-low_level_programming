#include "main.h"

/**
 * puts_half - prints half string
 * @str: input
 */
void puts_half(char *str)
{
	int i, len = 0, k, mid;
	char *temp;

	while (str[len] != '\0')
	{
		len++;
	}
	mid= len / 2;
	for (i = mid; k = 0; i <= len; k++, i++)
	{
		temp[k] = str[i];
		_putchar(temp[k]);
	}
	_putchar('\n');
}
