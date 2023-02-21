#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void diagonal(int c)
{
	int a, b;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < c; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	 }
}
int main(void)
{
    diagonal(0);
    diagonal(2);
    diagonal(10);
    diagonal(-4);
    return (0);
}
