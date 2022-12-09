#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	do {
		putchar(c);
		c++;
	} while (c <= 'f');
	putchar('\n');
	return (0);
}
