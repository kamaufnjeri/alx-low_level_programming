#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
