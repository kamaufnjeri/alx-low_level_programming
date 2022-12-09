#include <stdio.h>

/**
 * main - entry points
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c;
	char g;

	i = 0;
	c = ',';
	g = ' ';

	while (i <= 9)
	{
		putchar(i + '0');
			if (i < 9)
			{
				putchar(c);
				putchar(g);
			}
		i++;
	}
	putchar('\n');
	return (0);
}
