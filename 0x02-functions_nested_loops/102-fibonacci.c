#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print first fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int j = 0;
	long int k = 0, l = 1, next;

	while (j < 50)
	{
		next = k + l;
		k = l;
		l = next;
		printf("%lu", next);

		if (j < 49)
		{
			printf(",");
		}
		j++;
	}
	putchar('\n');
	return (0);
}
