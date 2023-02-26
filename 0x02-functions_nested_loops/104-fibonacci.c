#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b, c, l = 1000000000, b1, b2, a1, a2;
	int i;
	
	b = 2;
	a = 1;
	printf("%lu, ", a);
	for (i = 1; i < 91; i++)
	{
		printf("%lu, ", b);
		b = b + a;
		a = b - a;
	}
	b1 = (b / l);
	b2 = (b % l);
	a1 = (a / l);
	a2 = (a % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", a1 + (a2 / l));
		printf("%lu", a2 % l);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
