#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void nums(void)
{
	int a;

	for(a = 0; a <=9; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}
int main(void)
{
    nums();
    return (0);
}
