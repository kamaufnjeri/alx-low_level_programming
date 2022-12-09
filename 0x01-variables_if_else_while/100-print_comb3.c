#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = 0; dgt1 < 9; dgt1++)
	{
		for (dgt2 = dgt1 + 1; dgt2 < 10; dgt2++)
		{
			putchar((dgt1 % 10) + '0');
			putchar((dgt2 % 10) + '0');

			if (dgt1 == 8 && dgt2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
