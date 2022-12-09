#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char X;

	x = 'a';
	X = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	do {
		putchar(X);
		X++;
	} while (X <= 'Z');

	putchar('\n');
	return (0);
}
