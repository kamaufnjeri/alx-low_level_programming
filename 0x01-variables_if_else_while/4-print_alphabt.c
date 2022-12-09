#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char x;

	x = 'a';

	while
		(x <= 'z')
		{
		if ((x != 'q' && x != 'e') && x <= 'z')
			putchar(x);
		x++;
		}
	putchar('\n');
	return (0);
}
