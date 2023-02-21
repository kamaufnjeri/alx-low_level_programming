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
	for (i = mid; i <= len; i++)
	{
		for (k = 0; ; k++)
		{
			temp[k] = str[i];
			_putchar(temp[k]);
		}
	}
	_putchar('\n');
}
