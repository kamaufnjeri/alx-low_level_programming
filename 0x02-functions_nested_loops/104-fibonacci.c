#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0, b = 1, c, l = 1000000000;
	int i;

	for (i = 1; i < 91; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	b1 = (b / l);
	b2 = (b % l);
	a1 = (a / l);
	a2 = (a % l);
	c1 = (c / l);
	c2 = (c % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", c1);
		printf("%lu", c2 % l);
		c1 = a1 + a2;
		a1 = b1;
		b1 = c1;
		c2 = a2 + b2;
		a2 = b2;
		b2 = c2;
	}
	printf("\n");
	return (0);
}
