#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
